#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - Print all number of arguments with a separator
 *@n: args to printf
 *@separator: pointer to char  that containt the separator
 *Result: a matrix with H character
 *Return: an int with the result of sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(args, int));
		else
			if (separator != NULL)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d",va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}

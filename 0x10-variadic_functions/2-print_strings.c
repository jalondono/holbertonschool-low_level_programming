#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - Print all number of arguments with a separator
 *@n: args to printf
 *@separator: pointer to char  that containt the separator
 *Result: a matrix with H character
 *Return: an int with the result of sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	if (separator == NULL)
		return;
	va_start (args,n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL && i < n - 1)
		{
			printf("(nil)%s",separator);
		}
		else if (s == NULL && i == n - 1)
			printf("(nil)");
		else if (i == n - 1)
			printf("%s", s);
		else
			printf("%s%s",s , separator);
	}
	printf("\n");
	va_end(args);
}

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - Print all number of arguments with a separator
 *@format: args to prin
 *Result: a matrix with H character
 *Return: an int with the result of sum
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *string;

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			string = va_arg(args, char *);
			if (string != NULL)
			{
				printf("%s", string);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		     format[i] == 'f' || format[i] == 's') && format[i + 1] != 0)
			printf(", ");
		i++;
	}
	printf("\n"), va_end(args);
}

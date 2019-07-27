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
	int i = 0, x = 0, j = 0;
	va_list args;
	char *string;
	//char *car = "cifs";

	va_start(args, format);
	while (format[i] != '\0' && format)
	{
		x = 0;
		j = 0;
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
			if (string == NULL)
			{
				string = "(nil)";
				break;
			}
			printf("%s", string);
			break;
		default:
			x = 1;
		}
		while (x == 0 && format[j] != '\0')
		{
			j++;
			if (format[i + j] == 'c' || format[i + j] == 'i' ||
			    format[i + j] == 'f' || format[i + j] == 's')
			{
				printf(", ");
				x = 1;
			}
		}
		i++;
	}
	printf("\n");
	return;
}

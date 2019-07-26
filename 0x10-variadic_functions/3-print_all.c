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
	int i = 0, x = 0;
	va_list args;
	char *string;
	//char tipo;

	if (format == NULL)
		return;
	va_start(args, format);
	while (format[i] != '\0')
	{
		x = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			//tipo = 'c';
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			//tipo = 'i';
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			//tipo = 'f';
			break;
		case 's':
			//tipo = 's';
			string = va_arg(args, char *);
			while (string == NULL)
			{
				string = "(nil)";
				break;
			}
			printf("%s", string);
			break;
		default:
			x = 1;
		}
		if (x == 0 && (format[i + 2] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
}

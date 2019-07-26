#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum all argv in the function
 *@n: string to copy on new buffer
 *Result: a matrix with H character
 *Return: an int with the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int x = 0;

	va_start(args, n);
	for (x = 0; x < n; x++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}

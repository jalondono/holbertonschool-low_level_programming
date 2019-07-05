#include "holberton.h"
/**
 *print_number - program thisgs
 *Result: always return 0
 *@n: variable de entrada
 *Return: value depending on function
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

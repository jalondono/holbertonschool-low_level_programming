#include "holberton.h"
/**
 *print_binary - singly linked list
 *@n: number to get bit
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int j = 0;
	int resultado = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; n >> i; i++)
	{
	}
	for (j = i - 1; j >= 0; j--)
	{
		resultado = (n >> j) & 1;
		_putchar(resultado + '0');

	}
}

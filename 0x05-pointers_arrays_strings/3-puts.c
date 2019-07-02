#include "holberton.h"
/**
 *_puts - program thisgs
 *Result: always return 0
 *@str: variable de entrada
 *Return: value depending on function
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

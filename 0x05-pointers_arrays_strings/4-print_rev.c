#include "holberton.h"
/**
 *print_rev - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
void print_rev(char *s)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

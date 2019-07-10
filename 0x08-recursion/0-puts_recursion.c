#include "holberton.h"
/**
 *_puts_recursion - Print an string using recursion
 *Result: always return 0
 *@s: input string
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}

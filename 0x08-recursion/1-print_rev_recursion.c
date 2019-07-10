#include "holberton.h"
/**
 *_print_rev_recursion - print s string in reverse usin recursion
 *Result: always
 *@s: input strring
 *Return: value depending on function
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

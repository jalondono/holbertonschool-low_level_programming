#include "holberton.h"
/**
 *_strlen_recursion - count the length of an strig
 *Result: always return 0
 *@s: input string
 *Return: value depending on function
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

#include "holberton.h"
/**
 *_strchr - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *@c: entrada source
 *Return: value depending on function
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (0);
}

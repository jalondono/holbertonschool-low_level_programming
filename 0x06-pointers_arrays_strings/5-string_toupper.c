#include "holberton.h"
/**
 *string_toupper - program thisgs
 *Result: always return 0
 *@s: va
 *Return: value depending on function
 */
char *string_toupper(char *s)
{
	while (s[i] != '\0')
	{
		s[i] = s[i] - 32;
	}
	return (s);
}

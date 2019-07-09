#include "holberton.h"
/**
 *_strpbrk - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *@accept: entrada source
 *Return: value depending on function
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int c = 1;

	while (*s != '\0'  && c == 1)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				c = 0;
				break;
			}
		}
		if (c == 0)
		{
			break;
		}
		s++;
	}
	return (s);
}

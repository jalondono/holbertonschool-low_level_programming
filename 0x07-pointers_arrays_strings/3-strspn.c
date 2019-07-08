#include "holberton.h"
/**
 *_strspn - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *@accept: entrada source
 *Return: value depending on function
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int pesostring = 0;
	int match = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	pesostring = i / sizeof(char);
	for (j = 0; j <= pesostring; j++)
	{
		for (k = 0; k < pesostring; k++)
		{
			if (s[j] == accept[k])
			{
				match++;
			}
		}
	}
	return (match);
}

#include "holberton.h"
/**
 *leet - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char l[] = "aeotlAEOTL";
	char m[] = "4307143071";

	while (s[i] != '\0')
	{
		for (j = 0 ; j <= 9; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = m[j];
			}
		}
		i++;
	}
	return (s);
}

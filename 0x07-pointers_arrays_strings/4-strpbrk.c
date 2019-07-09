#include "holberton.h"
/**
*_strspn - program thisgs
*Result: always return 0
*@s: variable de entrada
*@accept: variable in
*Return: value depending on function
*/
unsigned int _strspn(char *s, char *accept)

{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				j = 1;
			}
		}
		if (j == 1)
		{
			return (s + a);
		}
	}
	return ('\0');
}

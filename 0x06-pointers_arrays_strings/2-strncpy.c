#include "holberton.h"
/**
 *_strncpy - program thisgs
 *Result: always return 0
 *@dest: variable de entrada
 *@src: entrada source
 *@n: numbers of byte
 *Return: value depending on function
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
{
		if (j > i)
		{
			dest[j] = '\0';
		}
		else
		{
			dest[j] = src[j];
		}
}
return (dest);
}

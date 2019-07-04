#include "holberton.h"
/**
*_strncat - program thisgs
*Result: always return 0
*@dest: variable de entrada
*@src: entrada source
*@n: numbers of characters
*Return: value depending on function
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

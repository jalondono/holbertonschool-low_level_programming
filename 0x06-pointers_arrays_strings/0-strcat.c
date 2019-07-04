#include "holberton.h"
/**
*_strcat - program thisgs
*Result: always return 0
*@dest: variable de entrada
*@src: entrada source
*Return: value depending on function
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}

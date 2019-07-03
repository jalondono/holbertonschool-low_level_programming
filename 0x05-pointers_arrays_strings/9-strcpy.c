#include "holberton.h"
/**
 *strcpy - program thisgs
 *Result: always return 0
 *@dest: variable de entrada
 *@src: entrada source
 *Return: value depending on function
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

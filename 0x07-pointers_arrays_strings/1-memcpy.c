#include "holberton.h"
/**
 *_memcpy - program thisgs
 *Result: always return 0
 *@dest: variable de entrada
 *@src: variable entrada
 *@n: variable entrada
 *Return: value depending on function
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

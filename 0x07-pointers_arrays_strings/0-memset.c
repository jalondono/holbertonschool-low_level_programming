#include "holberton.h"
/**
 *_memset - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *@b: caracter a reemplazar
 *@n:numero de caracteres a reemplazar
 *Return: value depending on function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

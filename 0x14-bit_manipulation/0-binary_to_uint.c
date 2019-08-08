#include "holberton.h"
/**
 *_strlen - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */

int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 * binary_to_uint - singly linked list
 * @b: structure
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
unsigned int binary_to_uint(const char *b)
{
	int  i = 0, potencia = 1;
	unsigned int acumulado = 0;
	int size = 0;

	if (b == 0)
		return (0);
	size = _strlen(b) - 1;

	for (i = size; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (i == size)
				potencia = 1;
			else
				potencia *= 2;
			if (b[i] == '1')
				acumulado = acumulado + potencia;
		}
		else
			return (0);
	}
	return (acumulado);
}

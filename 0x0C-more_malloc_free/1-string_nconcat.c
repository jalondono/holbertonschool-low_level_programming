#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *_strlen - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 *string_nconcat - duplicate ans string in a new buffer
 *@s1: string to copy on new buffer
 *@s2: height of string
 *@n: number of bytes
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sizea = _strlen(s1);
	unsigned int sizeb = _strlen(s2);
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;

	str = malloc(sizea + sizeb - n + 1);
	if (str == NULL)
		return (NULL);
	if (n >= sizeb)
		n = sizeb;
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		str[sizea + i] = s2[i];
	}
	str[sizea + i] = '\n';
	return (str);
}

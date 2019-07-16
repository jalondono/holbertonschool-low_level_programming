#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *str_concat - duplicate ans string in a new buffer
 *@s1: string to copy on new buffer
 *@s2: string
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	dest = malloc(sizeof(char) * (i + j) + 1);
	if (dest == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		dest[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		dest[i + l] = s2[l];
	}
	dest[i + l] = '\0';
	return (dest);
}

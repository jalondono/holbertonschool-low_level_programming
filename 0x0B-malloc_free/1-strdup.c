#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *_strdup - duplicate ans string in a new buffer
 *@str: string to copy on new buffer
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *value;

	if (str[0] == '\0')
		return ('\0');
	while (str[i])
	{
		i++;
	}
	value = malloc(sizeof(char) * i);
	if (value == 0)
		return ('\0');
	for (j = 0; j <= i; j++)
	{
		value[j] = str[j];
	}
	value[i] = '\0';
	return (value);
}

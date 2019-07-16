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

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i  += 1;
	value = malloc(sizeof(char) * i);
	if (value == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		value[j] = str[j];
	}
	value[j + 1] = '\0';
	return (value);
}

#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *argstostr - duplicate ans string in a new buffer
 *@ac: string to copy on new buffer
 *@av: height of string
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
char *argstostr(int ac, char **av)
{
	char *value;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int a = 0;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	value = malloc(sizeof(char) * (count + 1));
	if (value == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			value[a] = av[k][l];
			a++;
		}
		value[a] = '\n';
		a++;
	}
	value[a] = '\0';
	return (value);

}

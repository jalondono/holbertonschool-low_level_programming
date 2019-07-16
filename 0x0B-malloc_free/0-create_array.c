#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *main - Print an string using recursion
 *@argc: number of arguments
 *@argv: vector with the values
 *Result: always return 0
 *Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char  *variable;
	unsigned int i = 0;

	variable = malloc(sizeof(char) * size);
	if (variable == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			variable[i] = c;
		}
		return (variable);
	}
}

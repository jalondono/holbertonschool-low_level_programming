#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *create_array - create a dinamic buffer and inicialize
 *@size: size of buffer
 *@c: incitial character
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
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

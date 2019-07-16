#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *alloc_grid - duplicate ans string in a new buffer
 *@width: string to copy on new buffer
 *@height: height of string
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
int **alloc_grid(int width, int height)
{
	int **value;
	int i = 0;
	int j = 0;
	int k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	value = malloc(width * sizeof(int *));
	if (value == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		value[i] = malloc(height * sizeof(int));

	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			value[j][k] = 0;
		}
	}
	return (value);
}

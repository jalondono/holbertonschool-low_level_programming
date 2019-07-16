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
	int h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	value = (int **) malloc(width * sizeof(int *));
	if (value == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		value[i] = (int *) malloc(height * sizeof(int));
		if (value[i] == NULL)
		{
			for(h = 0; h < i; h++)
			{
				free(value[h]);
			}
			free(value);
			return (NULL);
		}
	}
       	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			value[j][k] = 0;
		}
	}
	return (value);
}

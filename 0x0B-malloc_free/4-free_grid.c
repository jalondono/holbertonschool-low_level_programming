#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *free_grid - duplicate ans string in a new buffer
 *@grid: string to copy on new buffer
 *@height: height of string
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

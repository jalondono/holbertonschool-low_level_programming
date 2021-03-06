#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *array_range - generate an array with values in a range gave it
 *@min: min range
 *@max: max range
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
int *array_range(int min, int max)
{
	int *var;
	int i = 0;
	int j = 0;

	if (min > max)
		return (NULL);
	var = (int *)malloc(sizeof(int) * (max - min + 1));
	if (var == NULL)
		return (NULL);
	for (i = 0, j = min; i <= (max - min); i++, j++)
	{
		var[i] = j;
	}
	return (var);
}

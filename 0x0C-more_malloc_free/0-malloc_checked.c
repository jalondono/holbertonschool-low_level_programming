#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *malloc_checked - duplicate ans string in a new buffer
 *@b: string to copy on new buffer
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
void *malloc_checked(unsigned int b)
{
	int *var = NULL;

	var = malloc(b);
	if (var == NULL)
		exit(98);
	return (var);
}

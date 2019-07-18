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
void *malloc_checked(unsigned int b)
{
	int *var = NULL;
	var = malloc(sizeof(int) * b);
	if (var == NULL)
		exit(98);
	return (var);
}

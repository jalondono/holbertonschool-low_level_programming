#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *_calloc - allocate a block of memory and fill with 0
 *@nmemb: number of elements
 *@size: size of variable in byte
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}

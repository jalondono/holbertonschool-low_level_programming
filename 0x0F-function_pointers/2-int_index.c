#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - print a name throught a pointer
 *@array: string to copy on new buffer
 *@size: pointer to function
 *@cmp: puntero a la funcion
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int a = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			a = cmp(array[i]);
			if (a == 1)
				return (i);
			if (i == size - 1)
				return (-1);
		}
	}
	return (i);
}

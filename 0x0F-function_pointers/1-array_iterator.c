#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - print a name throught a pointer
 *@array: string to copy on new buffer
 *@size: pointer to function
 *@action: puntero a la funcion
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

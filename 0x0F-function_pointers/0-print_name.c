#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print a name throught a pointer
 *@name: string to copy on new buffer
 *@f: pointer to function
 *Result: a matrix with H character
 *Return: a pointer if can do  the buffer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - singly linked list
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (0);
	else
		return (1);
}

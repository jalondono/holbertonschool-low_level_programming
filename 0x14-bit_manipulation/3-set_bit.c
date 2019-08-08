#include "holberton.h"

/**
 * set_bit - singly linked list
 * @n: number to set byte
 * @index: index of numbert to set byte
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n[0] = (1 << index) | *n;
	return (1);
}

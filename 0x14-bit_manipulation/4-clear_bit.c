#include "holberton.h"
/**
 * clear_bit - singly linked list
 * @n: number to get bit
 * @index: index
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n[0] = (~(1 << index) & *n);
	return (1);
}

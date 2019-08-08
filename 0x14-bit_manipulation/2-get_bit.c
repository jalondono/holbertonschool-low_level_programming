#include "holberton.h"
/**
 * get_bit - singly linked list
 * @n: number to get bit
 * @index: index
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int resultado = 0;

	if (index > 64)
		return (-1);
	resultado = (n >> index) & 1;
	return (resultado);
}

#include "holberton.h"
/**
 * flip_bits - singly linked list
 * @n: number to get bit
 * @m: second number to compare
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	int resulA = 0;
	int resulB = 0;
	int i = 0;

	for  (i = 0; i < 64; i++)
	{
		resulA = (n >> i) & 1;
		resulB = (m >> i) & 1;
		if (resulA == resulB)
			counter++;
	}
	return (64 - counter);

}

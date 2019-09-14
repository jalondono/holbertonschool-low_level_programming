#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - singly linked list
 * @h: structure
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: structure
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

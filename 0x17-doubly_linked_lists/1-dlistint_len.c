#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - singly linked list
 * @h: structure
 * Description: singly linked list node structure
 * Return: a number of elements
 * for Holberton project
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

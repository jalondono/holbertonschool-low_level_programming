#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: structure
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

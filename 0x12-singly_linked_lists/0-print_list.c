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
size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}

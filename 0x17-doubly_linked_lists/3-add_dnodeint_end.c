#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - singly linked list
 * @head: structure
 * @n: value
 * Description: singly linked list node structure
 * Return: a number of elements
 * for Holberton project
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *copy = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (copy->next != NULL)
	{
		if (copy->next == NULL)
		{
			new->prev = copy;
		}
		copy = copy->next;
	}
	copy->next = new;
	return (new);
}

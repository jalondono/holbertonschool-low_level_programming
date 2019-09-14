#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - singly linked list
 * @head: structure
 * @n:value
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		head->prev = new;
	*head = new;
	return (new);

}

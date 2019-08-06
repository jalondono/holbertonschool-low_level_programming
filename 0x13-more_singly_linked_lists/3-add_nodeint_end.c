#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - singly linked list
 * @head: structure
 * @n: value
 * Description: singly linked list node structure
 * Return: a number of elements
 * for Holberton project
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *copy = *head;

	new = malloc(sizeof(listint_t));
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
		copy = copy->next;
	copy->next = new;
	return (new);
}

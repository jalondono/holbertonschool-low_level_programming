#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - singly linked list
 * @head: structure
 * @n:value
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}

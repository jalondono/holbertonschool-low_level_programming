#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * reverse_listint - singly linked list
 * @head: structure
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (current == NULL)
			break;
		*head = current;
	}
	return (*head);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *get_dnodeint_at_index - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *@index: index node
 *Return: value depending on function
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}

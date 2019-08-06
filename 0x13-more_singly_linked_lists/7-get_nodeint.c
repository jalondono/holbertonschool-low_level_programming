#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *get_nodeint_at_index - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *@index: index node
 *Return: value depending on function
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

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

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *insert_nodeint_at_index - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *@idx: index to add a node
 *@n: value to node
 *Return: value depending on function
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copy = *head;
	listint_t *new;
	unsigned int i = 0;

	if (idx < 1 || head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		copy = copy->next;
		if (copy == NULL)
			return (NULL);
		i++;
	}
	new->n = n;
	new->next = copy->next;
	copy->next = new;
	return (new);
}

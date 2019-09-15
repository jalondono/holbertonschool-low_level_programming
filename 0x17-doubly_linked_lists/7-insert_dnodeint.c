#include "lists.h"
/**
 *insert_dnodeint_at_index - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *@idx: index to add a node
 *@n: value to node
 *Return: value depending on function
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *copy = *head;
	dlistint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(head, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
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
	copy->next->prev = new;
	new->prev = copy;
	copy->next = new;
	return (new);
}

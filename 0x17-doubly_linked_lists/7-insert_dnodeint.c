#include "lists.h"
/**
 *insert_dnodeint_at_index - program thisgs
 *Result: always return 0
 *@h: pointer to structure
 *@idx: index to add a node
 *@n: value to node
 *Return: value depending on function
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
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
	if (copy->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->n = n;
	new->next = copy->next;
	copy->next->prev = new;
	new->prev = copy;
	copy->next = new;
	return (new);
}

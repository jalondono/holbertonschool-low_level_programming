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
	new->n = n;
	new->next = *head;
	*head = new;
	new->prev = NULL;
	return (new);

}


/**
 *insert_nodeint_at_index - program thisgs
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
	copy->next = new;
	return (new);
}

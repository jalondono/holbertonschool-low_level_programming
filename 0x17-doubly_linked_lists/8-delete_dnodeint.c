#include "lists.h"
/**
 * delete_dnodeint_at_index - singly linked list
 * @head: structure
 * @index:value
 * Description: singly linked list node structure
 * Return: a number of elements
 * for Holberton project
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *maincopy = *head;
	dlistint_t *tempnode;

	if (head == NULL || *head == NULL)
		return (-1);
	while (maincopy)
	{
		if (i == index - 1)
		{
			tempnode = maincopy->next->next;
			if (tempnode != NULL)
				maincopy->next->next->prev = maincopy;
			free(maincopy->next);
			maincopy->next = tempnode;
			return (1);
		}
		else if (index == 0)
		{
			*head = (*head)->next;
			if (maincopy->next != NULL)
				(*head)->prev = NULL;
			else
				*head = NULL;
			free(maincopy);
			return (1);
		}
		maincopy = maincopy->next;
		i++;
	}
	return (-1);
}

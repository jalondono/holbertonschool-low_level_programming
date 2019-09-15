#include "lists.h"
/**
 *pop_dlistint - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *temp = NULL;

	if (*head == NULL)
		return (-1);
	temp = (*head)->next;
	if (temp != NULL)
	{
		temp->prev = NULL;
		free(*head);
		*head = temp;
	}
	else
		*head = NULL;
	return (1);
	}

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

	while (maincopy != NULL || head != NULL)
	{
		if (i == index - 1)
		{
			tempnode = maincopy->next->next;
			if (tempnode != NULL)
				tempnode->prev = maincopy;
			free(maincopy->next);
			maincopy->next = tempnode;
			return (1);
		}
		else if (index == 0)
		{
			return (pop_dlistint(head));
		}
		maincopy = maincopy->next;
		i++;
	}
	return (-1);
}

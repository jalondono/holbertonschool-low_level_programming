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
	int tempval = 0;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	tempval = (*head)->n;
	temp->prev = NULL;
	free(*head);
	*head = temp;
	return (tempval);
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

	while (maincopy)
	{
		if (i == index - 1)
		{
			tempnode = maincopy->next->next;
			free(maincopy->next);
			maincopy->next = tempnode;
			tempnode->prev = maincopy;
			return (1);
		}
		if (index == 0)
		{
			pop_dlistint(head);
			return (1);
		}
		maincopy = maincopy->next;
		i++;
	}
	return (-1);
}

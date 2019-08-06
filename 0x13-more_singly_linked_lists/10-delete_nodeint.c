#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int tempval = 0;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	tempval = (*head)->n;
	free(*head);
	*head = temp;
	return (tempval);
}

/**
 * delete_nodeint_at_index - singly linked list
 * @head: structure
 * @index:value
 * Description: singly linked list node structure
 * Return: a number of elements
 * for Holberton project
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *maincopy = *head;
	listint_t *tempnode;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	while (i < index - 1)
	{
		maincopy = maincopy->next;
		if (maincopy == NULL)
			return (-1);
		i++;
	}
	tempnode = maincopy->next->next;
	free(maincopy->next);
	maincopy->next = tempnode;
	return (1);
}

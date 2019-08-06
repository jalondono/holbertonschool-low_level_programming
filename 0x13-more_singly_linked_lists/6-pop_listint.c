#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

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

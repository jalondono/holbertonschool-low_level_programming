#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *free_listint2 - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
void free_listint2(listint_t **head)
{
	listint_t *copy = *head;
	listint_t *next;

	while (copy != NULL)
	{
		next = copy->next;
		free(copy);
		copy = next;
	}
	*head = NULL;

}

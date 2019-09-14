#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *free_dlistint - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy = head;
	dlistint_t *next;

	while (copy != NULL)
	{
		next = copy->next;
		free(copy);
		copy = next;
	}
	head = NULL;
}

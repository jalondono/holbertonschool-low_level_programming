#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *sum_dlistint - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}

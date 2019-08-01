#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *free_list - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
void free_list(list_t *head)
{
	list_t *ref = head;
	list_t *next;

	while (ref != NULL)
	{
		next = ref->next;
		free(ref->str);
		free(ref);
		ref = next;
	}
	head = NULL;
}

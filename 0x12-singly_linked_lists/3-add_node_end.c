#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 *_strlen - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 *add_node_end - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *@str: data
 *Return: value depending on function
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;
	char *string;
	list_t *ref;

	ref = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}
	len = _strlen(string);
	new->str = string;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ref->next != NULL)
	{
		ref = ref->next;
	}
	ref->next = new;
	return (new);
}

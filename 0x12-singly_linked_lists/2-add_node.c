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
 * add_node - singly linked list
 * @head: structure
 *@str: name
 * Description: singly linked list node structure
 *Return: a number of elements
 * for Holberton project
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;
	char *dubstring;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dubstring = strdup(str);
	if (dubstring == NULL)
	{
		free(new);
		return (NULL);
	}
	len = _strlen(dubstring);
	new->str = dubstring;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);




}

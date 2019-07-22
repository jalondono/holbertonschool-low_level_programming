#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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
 *_strcpy - program thisgs
 *Result: always return 0
 *@dest: variable de entrada
 *@src: entrada source
 *Return: value depending on function
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *new_dog - program thisgs
 *Result: always return 0
 *@age: edad perro
 *@name: nombre de perro
 *@owner: nombre del dueño
 *Return: value depending on function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *val;
	char *cpname;
	char *cpowner;

	val = malloc(sizeof(dog_t));
	if (val == NULL)
		return (NULL);
	cpname = malloc(sizeof(char) * _strlen(name) + 1);
	if (cpname == NULL)
	{
		free(val);
		return (NULL);
	}
	cpowner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (cpowner == NULL)
	{
		free(cpname);
		free(val);
		return (NULL);
	}
	cpname = _strcpy(cpname, name);
	cpowner = _strcpy(cpowner, owner);

	val->name = cpname;
	val->age = age;
	val->owner = cpowner;
	return (val);
}

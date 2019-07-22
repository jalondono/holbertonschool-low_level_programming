#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog - program thisgs
 *Result: always return 0
 *@d: structura de datos
 *Return: value depending on function
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

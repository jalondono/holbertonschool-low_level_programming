#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - program thisgs
 *Result: always return 0
 *@d: variable de entrada
 *@name: variable entrada
 *@age: variable entrada
 *@owner: propietario
 *Return: value depending on function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
       	d->name = name;
	d->age = age;
	d->owner = owner;
}

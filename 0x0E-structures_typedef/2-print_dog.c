#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - program thisgs
 *Result: always return 0
 *@d: structura de datos
 *Return: value depending on function
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name[0] == '\0')
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Name: (nil)\n");
		else
			printf("Age: %0.5f\n", d->age);
		if (d->owner[0] == '\0')
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}

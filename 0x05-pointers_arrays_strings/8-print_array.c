#include "holberton.h"
#include <stdio.h>
/**
 *print_array - program thisgs
 *Result: always return 0
 *@a: puntero de array
 *@n:variable numero de iteraciones
 *Return: value depending on function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

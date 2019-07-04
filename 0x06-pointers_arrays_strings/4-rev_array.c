#include "holberton.h"
/**
 *reverse_array - program thisgs
 *Result: always return 0
 *@a: variable de entrada
 *@n: entrada source
 *Return: value depending on function
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int l = 0;
	int j;
	int k[1000];

	for (l = 0; l < n; l++)
	{
		k[l] = a[l];
	}
	for (i = 0; i < n; i++)
	{
		j = n - 1 - i;
		a[i] = k[j];
		j--;
	}
}

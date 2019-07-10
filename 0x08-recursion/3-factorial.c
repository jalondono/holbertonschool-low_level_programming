#include "holberton.h"
/**
 *factorial - return the result of factorial n number
 *Result: always return 0
 *@n: number of factorial
 *Return: value of factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

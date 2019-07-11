#include "holberton.h"
/**
 *sqrt_aux - auxiliar program to find the Sqrt
 *Result: srqt of a number y
 *@x: variable to increment and comparare with y
 *@y: number to do sqrt
 *Return: value depend of the case
 */
int sqrt_aux(int x, int y)
{
	if (x * x == y)
		return (x);

	if (x * x > y)
		return (-1);

	return (sqrt_aux(x + 1, y));
}
/**
 *_sqrt_recursion - auxiliar program to find the Sqrt
 *Result: srqt of a number y
 *@n: variable to do sqrt
 *Return: value depend of the case
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_aux(0, n));
}

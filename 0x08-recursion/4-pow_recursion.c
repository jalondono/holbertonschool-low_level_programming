#include "holberton.h"
/**
 *_pow_recursion - return the power of a variable
 *Result: always return 0
 *@x: variable to raise
 *@y: in power of
 *Return: power increase of Y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}

#include "holberton.h"
/**
*print_triangle - programs things
*@size: valor de entrada
*Result: always returns 0
*Return: value depending on function
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k = size - 1;
	if(size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j  < (k - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

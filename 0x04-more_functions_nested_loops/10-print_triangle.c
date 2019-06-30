
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
	if(size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			if(i != size)
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

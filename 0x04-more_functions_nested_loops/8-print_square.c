#include "holberton.h"
/**
*print_square - programs things
*Result: always returns 0
*@size: numero de iteraciones
*Return: value depending on function
*/
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
if (j == (size - 1))
{
_putchar('\n');
}
}
}
}
else
{
_putchar('\n');
}
}

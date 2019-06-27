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
_putchar('\n');
}
}

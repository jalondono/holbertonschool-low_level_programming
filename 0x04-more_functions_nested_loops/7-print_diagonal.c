#include "holberton.h"
/**
*print_diagonal - programs things
*Result: always returns 0
*@n: numero de iteraciones
*Return: value depending on function
*/
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (j != 0)
{
_putchar(' ');
}
if (j == i)
{
_putchar('\\');
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

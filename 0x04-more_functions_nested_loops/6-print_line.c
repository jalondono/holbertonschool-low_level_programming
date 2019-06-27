#include "holberton.h"
/**
*print_line - programs things
*Result: always returns 0
*@n: numero de iteraciones
*Return: value depending on function
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('_');
}
_putchar('\n');
}

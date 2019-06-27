#include "holberton.h"
/**
*more_numbers - programs things
*Result: always returns 0
*Return: value depending on function
*/

void more_numbers(void)
{
int i;
int iprima;
int j;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
iprima = i % 10;
if (i >= 10)
{
_putchar('1');
}
_putchar (iprima + '0');
}
_putchar('\n');
}
}

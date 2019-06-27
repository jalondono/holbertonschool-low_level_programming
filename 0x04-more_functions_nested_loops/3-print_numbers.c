#include "holberton.h"
/**
*print_numbers - programs things
*Result: always returns 0
*Return: value depending on function
 */

void print_numbers(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

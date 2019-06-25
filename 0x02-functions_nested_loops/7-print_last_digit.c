#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
if (a < 0)
{
a = a * -1;
}
a = a % 10;
_putchar(a + '0');
return a;
}

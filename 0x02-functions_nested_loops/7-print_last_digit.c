#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @a : Return the variable
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
return (a);
}

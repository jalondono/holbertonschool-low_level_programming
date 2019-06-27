#include "holberton.h"
/**
*print_most_number - programs things
*Result: always returns 0
*Return: value depending on function
 */

void print_most_numbers(void)
{
int a;
for(a = '0'; a <= '9'; a++)
{
if(a != '2' || a != '4')
{
_putchar(a);
}
}
_putchar('\n');
}

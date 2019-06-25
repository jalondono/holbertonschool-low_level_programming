#include "holberton.h"
/**
 * main - printing 10 times the alpa
 * Return : always 0
 */

void print_alphabet_x10 (void)
{
int i;
char a;
for (i = 0; i <=9; i++)
{
for(a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}

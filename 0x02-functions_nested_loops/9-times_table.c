#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i;
int j;
int fir;
int sec;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
fir = (i * j) / 10;
sec = (i * j) % 10;
if (fir == 0)
{
_putchar(sec + '0');
} 
else
{
_putchar(fir + '0');
_putchar(sec + '0');
}
if (j != 9){ 
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

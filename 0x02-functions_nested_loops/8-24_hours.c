#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i;
int j;
int hour;
int hourp;
int min;
int minp;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
hourp = i / 10;
hour = i % 10;
minp = j / 10;
min = j % 10;
_putchar(hourp + '0');
_putchar(hour + '0');
_putchar(':');
_putchar(minp + '0');
_putchar(min + '0');
_putchar('\n');
}
}
}

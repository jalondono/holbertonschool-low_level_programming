#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
int k;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
}
if (n == 98)
{
printf("%d", 98);
}
if (n < 98)
{
for (k = n; k <= 98; k++)
{
if (k == 98)
{
printf("%d", k);
}
else
{
printf("%d, ", k);
}
}
}
printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prueba 3
 * Return: always 0
 */
int main(void)
{
int a = 0;
int aprima;
int b;
int c;
for (a = 0; a <= 9; a++)
{
aprima = a + '0';
putchar (aprima);
if (a != 9)
{
for (b = 0; b < 1 ; b++)
{
putchar (',');
for (c = 0; c < 1; c++)
{
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

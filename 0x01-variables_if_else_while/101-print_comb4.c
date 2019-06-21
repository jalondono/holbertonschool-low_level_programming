#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - prueba 10
  * Return: Always 0
  */
int main(void)
{
int a = 0;
int aprima;
int b;
int bprima;
int c;
int cprima;
for (a = 0; a <= 9; a++)
{
aprima = a + '0';
for (b = 0; b <= 9 ; b++)
{
bprima = b + '0';
for (c = 0 ; c <= 9; c++)
{
cprima = c + '0';
if (a == b || b == c || a > b || b > c)
{
}
else
{
putchar(aprima);
putchar(bprima);
putchar(cprima);
if (a == 7 && b == 8 && c == 9)
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

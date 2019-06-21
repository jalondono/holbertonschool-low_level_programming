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
for (a = 0; a <= 9; a++)
{
aprima = a + '0';
for (b = 0; b <= 9 ; b++)
{
bprima = b + '0';
if (a == b || a > b)
{
}
else
{
putchar(aprima);
putchar(bprima);
if (a == 8 && b == 9)
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
putchar('\n');
return (0);
}

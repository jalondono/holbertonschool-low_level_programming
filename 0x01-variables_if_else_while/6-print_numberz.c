#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - prueba 6
  * Return: always 0
  */
int main(void)
{
int h;
int i = 0;
for (i = 0; i <= 9 ; i++)
{
h = i + '0';
putchar (h);
}
putchar('\n');
return (0);
}

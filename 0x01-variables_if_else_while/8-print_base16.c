#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - prueba 3
  * Return: always 0
  */
int main(void)
{
char i = '0';
char h = 'a';
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (h = 'a'; h <= 'f'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prueba 3
 * Return: always 0
 */
int main(void)
{
char i = 'a';
char h = 'A';
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (h = 'A'; h <= 'Z'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}

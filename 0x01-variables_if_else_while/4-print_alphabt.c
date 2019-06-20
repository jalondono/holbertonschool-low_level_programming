#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prueba 4
 * Return: always 0
 */
int main(void)
{
char i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
{
continue;
putchar (i);
}
}
putchar ('\n');
return (0);
}

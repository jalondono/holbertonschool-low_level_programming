#include "holberton.h"
/**
  * main - printing the sign of a number
  * Return: always 0
  */
int print_sign(int r)
{
if(r > 0)
{
_putchar('+');
r = 1;
}
if (r == 0)
{
_putchar('0');
r = 0;
}
if (r < 0)
{
_putchar('-');
r = -1;
}
return r;
}

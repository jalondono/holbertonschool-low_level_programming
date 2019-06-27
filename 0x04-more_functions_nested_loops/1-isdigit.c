#include "holberton.h"
/**
 *_isdigit - program thisgs
 *Result: always return 0
 *@c: variable de entrada
 *Return: value depending on function
 */

int _isdigit(int c)
{
int a;
if (c >= 48 && c <= 57)
{
a = 1;
}
else
{
a = 0;
}
return (a);
}

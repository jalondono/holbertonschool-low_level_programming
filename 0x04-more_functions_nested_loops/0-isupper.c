#include "holberton.h"
/**
*_isupper - programs things
*Result: always returns 0
*@c : character determined by function
*Return: value depending on function
 */

int _isupper(int c)
{
int  a;
if (c >= 65 && c <= 90)
{
a = 1;
}
else
{
a = 0;
}
return (a);
}

#include "holberton.h"

/**
 * _isupper - main principal
 * @c : variable de entrada
 * Return : devuelve un entero
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

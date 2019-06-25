#include "holberton.h"
/**
  * _islower - printing if a char is lower or not
  * @c : return if is lower o not
  * Return: 1 if char is lower 0 if doesn't lower
  */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
c = 1;
}
else
{
c = 0;
}
return (c);
}

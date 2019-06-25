#include "holberton.h"
/**
  * main - printing if a char is lower or not 
  * Retur : 1 if char is lower 0 if doesn't lower
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
return c;
}

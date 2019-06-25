#include "holberton.h"
/**
  * main - printing if a char is lower or not
  * Retur : 1 if char is lower 0 if doesn't lower
  */
int _isalpha(int c)
{
 if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
c = 1;
}
else
{
c = 0;
}
return c;
}

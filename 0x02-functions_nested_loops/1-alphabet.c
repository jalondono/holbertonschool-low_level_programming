#include "holberton.h"
/**
  * print_alphabet - print the alphabet
  * Return: 0
  */
void  print_alphabet(void)
{
char letras = 'a';
for (letras = 'a'; letras <= 'z'; letras++)
{
_putchar(letras);
}
_putchar('\n');
}

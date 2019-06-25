#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int tamano;
char cadena[] = "Holberton";
tamano = sizeof(cadena) / sizeof(char);
for (i = 0; i < tamano; i++)
{
_putchar(cadena[i]);
}
_putchar('\n');
return (0);
}

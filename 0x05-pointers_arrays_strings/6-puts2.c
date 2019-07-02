#include "holberton.h"
/**
 *puts2 - program thisgs
 *Result: always return 0
 *@str:variable de entrada
 *Return: value depending on function
 */

void puts2(char *str)
{
	int i;
	int j;
	while (*(str+i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j = j + 2)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}

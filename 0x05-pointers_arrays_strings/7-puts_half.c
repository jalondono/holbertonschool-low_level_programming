#include "holberton.h"
/**
 *puts_half - program thisgs
 *Result: always return 0
 *@str: variable de entrada
 *Return: value depending on function
 */
void puts_half(char *str)
{
	int i = 0;
	int c;
	int j;
	char *str;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		c = i / 2;
		for (j = c; j < i; j++)
			putchar(str[j]);
	}
	else
	{
		c = i / 2;
		for (j = c + 1; j < i; j++)
			putchar(str[j]);
	}
}

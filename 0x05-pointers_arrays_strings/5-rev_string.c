#include "holberton.h"
/**
 *rev_string - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
void rev_string(char *s)
{
	int a;
	int i;
	int j;
	while(s[i] != '\0')
	{
		i++;
	}

	for(j = i; j >= 0; j--)
	{
		a = (i - j);
		s[a] = s[i];
	}
}

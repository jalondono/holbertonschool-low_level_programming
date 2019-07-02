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
	int i = 0;
	int j;
	int k;
	char copia[10];

	while(s[i] != '\0')
	{
		copia[i] = s[i];
		i++;
	}
	k = i - 1;

	for(j = k; j >= 0; j--)
	{
		a = (k - j);
		s[a] = copia[j];
	}
}

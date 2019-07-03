#include "holberton.h"
/**
 *_atoi - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
int _atoi(char *s)
{
	int signe = 1;
	int j = 0;
	int i = 0;
	int resultado = 0;
	int c = 1;

	while (s[j] != '\0' && c == 1)
	{
		if ((s[j] >= 48 && s[j] <= 57) && (s[j + 1] < 48 || s[j + 1] > 57))
		{
			c = 0;
		}
		j++;
	}
	for (i = 0; i < j ; i++)
	{
		if ((s[i] == '-') && (s[i + 1] >= 48 && s[i + 1] <= 57))
		{
			signe = -1;
		}
		if ((s[i] == '+') && (s[i + 1] >= 48 && s[i + 1] <= 57))
		{
			signe = 1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			resultado = resultado * 10 + (s[i] - '0');
		}
	}
	return (signe * resultado);
}

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
	int signoaux = 1;
	unsigned int resultaux = 0;

	while (s[j] != '\0' && c == 1)
	{
		if ((s[j] >= 48 && s[j] <= 57) && (s[j + 1] < 48 || s[j + 1] > 57))
		{
			c = 0;
		}
		if (s[j] == '-')
		{
			signoaux = -1;
			signe = signe * signoaux;
		}
		j++;
	}
	for (i = 0; i < j ; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			resultaux = resultaux * 10 + (s[i] - '0');
			resultado = resultaux;
		}
	}
	return (signe * resultado);
}

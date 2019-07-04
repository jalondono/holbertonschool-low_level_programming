#include "holberton.h"
/**
 *cap_string - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
		if ((s[i] >= 35 && s[i] <= 44) || (s[i] == 59) || s[i] == 46)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		if (s[i] == 123 || s[i] == 125 || s[i] == '\n')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		if (s[i] == '\t' || s[i] == 32 || s[i] == 33)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
			i++;
	}
	return (s);
}

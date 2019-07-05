#include "holberton.h"
/**
 *rot13 - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
char *rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 55; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

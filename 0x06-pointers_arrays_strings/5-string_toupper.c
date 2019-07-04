#include "holberton.h"
/**
 *string_toupper - program thisgs
 *Result: always return 0
 *@s: va
 *Return: value depending on function
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if(s[i] >= 65 && s[i] <= 90)
		{
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else
		{
		}
		i++;
	}
	return (s);
}

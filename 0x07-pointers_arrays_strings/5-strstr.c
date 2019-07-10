#include "holberton.h"
/**
 *_strstr - find and string pattern inside of src, and return the firs positio
 *Result: always return 0
 *@haystack: string SRC
 *@needle: string pattenr
 *Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((haystack + i) - (j - 1));
			}
				else
				{
					j = 0;
				}
		}
		i++;
	}
	if (*needle == '\0')
		return (haystack);
	return (0);
}

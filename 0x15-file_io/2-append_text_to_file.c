#include "holberton.h"
/**
 *_strlen - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 *append_text_to_file - program thisgs
 *Result: always return 0
 *@filename: name of file
 *@text_content: contentn of the file
 *Return: value depending on function
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int result;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (fd == -1)
			return (-1);
		else
			return (1);
	}
	result = write(fd, text_content, _strlen(text_content));
	if (result == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

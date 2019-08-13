#include "holberton.h"
/**
 *read_textfile - program thisgs
 *Result: always return 0
 *@filename: name of file
 *@letters: number of letters
 *Return: value depending on function
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *s;
	int result;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDONLY);
	if (fd == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	result = read(fd, s, sizeof(char) * letters);
	if (result == -1)
		return (0);
	result = write(1, s, sizeof(char) * letters);
	if (result == -1)
		return (0);
	return (result);
}

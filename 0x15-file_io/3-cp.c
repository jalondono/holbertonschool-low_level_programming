#include "holberton.h"
/**
 *main - program thisgs
 *Result: always return 0
 *@argc: number of arguments
 *@argv: arguments
 *Return: value depending on function
 */
int main(int argc, char *argv[])
{
	int resultfrom, resultto, fdfrom, fdto, closefrom, closeto = 0;
	char *namefrom, *nameto;
	char buf[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	} namefrom = argv[1], nameto = argv[2];
	fdfrom = open(namefrom, O_RDONLY);
	if (fdfrom == -1)
	{dprintf(STDERR_FILENO, "Usage: Error: Can't read from file %s\n", namefrom);
		exit(98);
	} fdto = open(nameto, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdto == 0)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nameto);
		exit(99);
	} resultfrom = read(fdfrom, buf, 1024);
	if (resultfrom == -1)
	{dprintf(STDERR_FILENO, "Usage: Error: Can't read from file %s\n", namefrom);
		exit(98);
	} while (resultfrom != 0)
	{
		resultto = write(fdto, buf, resultfrom);
		if (resultto  == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nameto);
			exit(99);
		} resultfrom = read(fdfrom, buf, 1024);
		if (resultfrom == -1)
		{dprintf(STDERR_FILENO, "Usage: Error: Can't read from file %s\n", namefrom);
			exit(98); }
	}
	closeto = close(fdto);
	if (closeto == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100); }
	closefrom = close(fdfrom);
	if (closefrom == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100); }
return (0);
}

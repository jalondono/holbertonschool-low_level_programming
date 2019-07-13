#include <stdio.h>
#include <stdlib.h>
/**
 *main - Print an string using recursion
 *@argc: number of arguments
 *@argv: vector with the values
 *Result: always return 0
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int resultado;
	int numok = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{

			if (argv[i][j] > 47 && argv[i][j] < 58)
			{
				numok = 1;
				j++;
			}
			else
			{
				numok = 0;
				j = 0;
				break;
			}

		}
		if (numok == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			resultado = resultado + atoi(argv[i]);
		}
	}
	printf("%d\n", resultado);
	return (0);
}

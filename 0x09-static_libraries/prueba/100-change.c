#include <stdio.h>
#include <stdlib.h>
/**
 *main - Print of number coins for change
 *@argc: number of arguments
 *@argv: cents
 *Result: always return 0
 *Return: number of coins
 */
int main(int argc, char *argv[])
{
	int arr[] = {25, 10, 5, 2, 1};
	int i = 0;
	int j = 0;
	int resultado = 0;
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cent = atoi(argv[1]);
		if (cent < 0)
		{
			printf("0\n");
			return (0);
		}
		while (resultado != cent)
		{
			resultado = resultado + arr[i];
			j++;
			if (resultado > cent)
			{
				resultado = resultado - arr[i];
				j--;
				i++;
			}

			if (resultado == cent)
			{
				printf("%d\n", j);
				return (0);
			}
		}
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *_isnumber - Print of number coins for change
 *@argv: cents
 *Result: always return 0
 *Return: number of coins
 */
int _isnumber(char *argv[])
{
	int i = 0;
	int j = 0;
	int numok = 0;

	for (i = 1; i <= 1; i++)
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
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
/**
*main  - Print of number coins for change
*@argc: size of argv
*@argv: cents
*Result: always return 0
*Return: number of coins
*/
int main(int argc, char *argv[])
{
	int arr[] = {25, 10, 5, 2, 1};
	int i = 0, j = 0, resultado = 0, cent = 0, isnumber = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		isnumber = _isnumber(argv);
		if (isnumber == 1)
		{
			printf("Error\n");
			return (1);
		}
		cent = atoi(argv[1]);
		if (cent <= 0)
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
				j--, i++;
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

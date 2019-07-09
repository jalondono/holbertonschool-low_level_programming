#include "holberton.h"
/**
 *print_chessboard - program thisgs
 *Result: always return 0
 *@a: variable de entrada
  *Return: value depending on function
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int k = 0;

	for (i = 0; i <= 7; i++)
	{
		for (k = 0; k <= 7; k++)
		{
			_putchar (a[i][k]);
		}
		_putchar('\n');
	}
}

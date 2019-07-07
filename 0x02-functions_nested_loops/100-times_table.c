#include "holberton.h"
/**
*reducirlineas - funcion secundaria
*@resultado: resultado
*@Firdigit: variable aux
*@n: times of iteration
*@j : comparation
* Return: always 0
**/
void reducirlineas(int resultado, int Firdigit, int n, int j)
{
	if (resultado < 10)
	{
		Firdigit = resultado;
	}
	else
	{
		Firdigit = resultado % 10;
	}
	_putchar(Firdigit + '0');
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
*print_times_table - check the code for Holberton School students.
*@n:times of iteration
* Return: Always 0.
**/
void print_times_table(int n)
{
	int i;
	int j;
	int Firdigito = 0;
	int Secdigito;
	int resultado;
	int Terdigito;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				resultado = i * j;
				Secdigito = (resultado % 100) / 10;
				Terdigito = (resultado / 100);
				if (j != 0)
				{
					if (resultado < 100)
						_putchar(' ');
					else
						_putchar(Terdigito + '0');

					if (resultado < 10)
						_putchar(' ');
					else
						_putchar(Secdigito + '0');
				}
				reducirlineas(resultado, Firdigito, n, j);
			}
			_putchar('\n');
		}
	}
}

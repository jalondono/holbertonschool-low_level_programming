#include <stdio.h>
/**
*main - programs things
*Result: always returns 0
*Return: value depending on function
 */
int main(void)
{
	int iteraciones = 2;
	int numPrimo = 2;
	long NumeroDeseado = 612852475143;
	int Rmodulo;

	while ((NumeroDeseado != 1)  && (iteraciones < NumeroDeseado))
	{
		Rmodulo = numPrimo % iteraciones;
		if (Rmodulo == 0)
		{
			if (iteraciones == numPrimo)
			{
				if (NumeroDeseado % numPrimo == 0)
				{
					NumeroDeseado = NumeroDeseado / numPrimo;
					iteraciones = 2;
					numPrimo = 2;

					if (NumeroDeseado / numPrimo == 1)
					{
						NumeroDeseado = 1;
						printf("%d\n", numPrimo);
					}
				}
				else
				{
					if (NumeroDeseado / numPrimo > numPrimo)
					{
						iteraciones = 2;
						numPrimo++;
					}
					else
					{
						printf("%ld\n", NumeroDeseado);
						NumeroDeseado = 1;
					}
				}
			}
			else
			{
				numPrimo++;
				iteraciones = 2;
			}
		}
		else
		{
			iteraciones++;
		}
	}
	return (0);
}

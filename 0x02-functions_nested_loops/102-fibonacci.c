#include <stdio.h>
/**
 * main - principal
 * Return: always 0
 **/

int main(void)
{
	long a = 1;
	long b = 2;
	long aux;
	long fibo;
	int i = 0;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%d, %d, ", 1, 2);
			fibo = a + b;
			printf("%ld, ", fibo);
		}
		aux = fibo;
		fibo = fibo + b;
		if(i != 47)
		{
			printf("%ld, ", fibo);
		}
		else
		{
			printf("%ld", fibo);
		}
		b = aux;
		i++;
	}
	printf("\n");
	return (0);
}

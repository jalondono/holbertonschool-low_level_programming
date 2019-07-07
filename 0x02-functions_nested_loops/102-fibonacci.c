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
			printf("%d\n%d\n", 1, 2);
			fibo = a + b;
			printf("%ld\n", fibo);
		}
		aux = fibo;
		fibo = fibo + b;
		printf("%ld\n", fibo);
		b = aux;
		i++;
	}
	return (0);
}

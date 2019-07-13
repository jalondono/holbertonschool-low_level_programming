#include <stdio.h>
#include <stdlib.h>
/**
 *main - Print a multiply of two integers
 *@argc: number of arguments
 *@argv: vector with the values
 *Result: always return 0
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}

}

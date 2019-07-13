#include <stdio.h>
/**
 *main - Print an string using recursion
 *@argc: number of arguments
 *@argv: vector with the values
 *Result: always return 0
 *Return: nothing
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
		}
	}
	printf("%d\n", i - 1);
	return (0);
}

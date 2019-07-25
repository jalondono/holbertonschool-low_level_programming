#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 *main - Print an string using recursion
 *@argc: number of arguments
 *@argv: vector with the values
 *Result: always return 0
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+")) && strcmp(argv[2], "-") &&
	    strcmp(argv[2], "/") && strcmp(argv[2], "*") &&
	    strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	    && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums - print the diagonals of a matriz
 *Result: sum of diagonals of a matriz
 *@a: array one dimention
 *@size: size of column and rows
 *Return: value depending on function
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int diagonalderecha =  0;
	int sizeauxder = size + 1;
	int sizeauxizq = size - 1;
	int diagonalizquierda = 0;

	for (i = 0, j = 1; i < size  ; i++, j++)
	{


		diagonalderecha = diagonalderecha + a[i * sizeauxder];


		diagonalizquierda = diagonalizquierda + a[j * sizeauxizq];

	}
	printf("%d, %d\n", diagonalderecha, diagonalizquierda);
}

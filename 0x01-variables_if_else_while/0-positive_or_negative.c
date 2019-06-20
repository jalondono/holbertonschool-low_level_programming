#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prueba 0
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d ", n);
printf("is positive \n");
}
if (n == 0)
{
printf("%d ", n);
printf("is zero \n");
}
if (n < 0)
{
printf("%d ", n);
printf("is negative \n");
}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prueba 1
 * Return: always 0
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d and is %d greater than %d\n", n, m, 5);
}
if (m == 0)
{
printf("Last digit of %d is %d and is %d \n", n, m, 0);
}
if (m < 6 && m != 0)
{
printf("Last digit of %d is %d less than %d and not %d \n", n, m, 6, 0);
}
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char charType;
int integerType;
long int Lint;
long long int Llint;
float Float;
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
printf("Size of a long int: %ld byte(s)\n", sizeof(Lint));
printf("Size of a long long int: %ld byte(s)\n", sizeof(Llint));
printf("Size of float: %ld byte(s)\n", sizeof(Float));
return (0);
}

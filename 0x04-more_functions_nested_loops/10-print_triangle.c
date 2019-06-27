#include <stdio.h>
/**
*print_triangle - programs things
*@size: valor de entrada
*Result: always returns 0
*Return: value depending on function
*/
void print_triangle(int size)
{
int i;
int j;
 int size = 10;
for (i = 0; i <= size; i++)
{
for (j = 0; j < size; j++)
{
if (j < (size - i))
{
printf(" ");
}
else
{
printf("#");
}
}
printf("\n");
}
return 0;
}

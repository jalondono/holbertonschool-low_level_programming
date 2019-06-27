#include <stdio.h>
/**
*main - programs things
*Result: always returns 0
*Return: value depending on function
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");  
}
else if (i % 5 == 0)
{
if (i == 100)
{
printf("Buzz\n");
}
else
{
printf("Buzz ");
}
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
}

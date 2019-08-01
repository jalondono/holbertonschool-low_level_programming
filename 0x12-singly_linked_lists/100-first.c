#include<stdio.h>
void startupfun(void) __attribute__ ((constructor));

/**
 * startupfun - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void startupfun(void)
{
	char *temp;

	temp = "I bore my house upon my back!\n";
	printf("You're beat! and yet, you must allow,\n%s", temp);
}

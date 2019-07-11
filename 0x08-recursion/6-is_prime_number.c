#include "holberton.h"
/**
 *prime_aux - auxiliar program to find the Sqrt
 *Result: srqt of a number y
 *@up: variable to increment and compare
 *@prime: number to say if its prime or no
 *Return: value depend of the case
 */
int prime_aux(int up, int prime)
{
	if (prime % up == 0 && prime == up)
	{
		return (1);
	}
	if (prime % up == 0 && prime != up)
	{
		return (0);
	}
	return (prime_aux(up + 1, prime));

}
/**
 *is_prime_number - auxiliar program to find the prime
 *Result: srqt of a number y
 *@n: variable say if its prime or no
 *Return: 0 or 1 depents if its prime or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_aux(2, n));
}

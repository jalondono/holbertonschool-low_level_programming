#include "holberton.h"
/**
 *_strlen_recursion - count the length of an strig
 *Result: always return 0
 *@s: input string
 *Return: value depending on function
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 *palindrome_aux - auxiliar program to find the Sqrt
 *Result: srqt of a number y
 *@up: variable to increment and compare
 *@down: number to say if its prime or no
 *@s: input string
 *Return: value depend of the case
 */
int palindrome_aux(int up, int down, char *s)
{
	if (s[up] != s[down])
		return (0);

	if (s[up] == s[down])
	{
		if (down < up)
			return (1);
	}

	return (palindrome_aux(up + 1, down - 1, s));
}
/**
 *is_palindrome - says if a string is palindrome or no
 *Result: srqt of a number y
 *@s: input string
 *Return: return 1 or 0 if string is palindromer
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);

	return (palindrome_aux(0, _strlen_recursion(s) - 1, s));
}

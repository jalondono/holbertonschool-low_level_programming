/**
 *print_number - programs things
 *@n: number
 *Result: always returns 0
 *Return: value depending on function
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}

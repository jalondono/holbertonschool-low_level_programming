/**
 *swap_int - program thisgs
 *Result: always return 0
 *@a: variable de entrada
 *@b: variable de entrada
 *Return: value depending on function
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to int a
 * @b: pointer to int b
 */
void swap_int(int *a, int *b)
{
	int tmp =  *a;

	*a = *b;
	*b = tmp;
}

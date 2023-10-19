/**
 * reverse_array - Reverse an array of ints
 * @a: array to reverse
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];

		a[i] = a[j - (i + 1)];
		a[j - (i + 1)] = tmp;
	}
}

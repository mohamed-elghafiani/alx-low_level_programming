
/**
 * reverse_array - a function that reverse an array of integers
 *
 * @a: The integers array
 * @n: the number of integers in the array @a
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, c;

	if (n % 2 == 0)
	{
		for (i = 0, j = n - 1; i < n / 2; i++, j--)
		{
			c = a[i];
			a[i] = a[j];
			a[j] = c;
		}
	}
	else
	{
		for (i = 0, j = n - 1; i < (n - 1) / 2; i++, j--)
		{
			c = a[i];
			a[i] = a[j];
			a[j] = c;
		}
	}
}

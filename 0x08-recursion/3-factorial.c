
/**
 * factorial - a function that calculate the factorial of a given number
 *
 * @n: the number whose factorial should be calculated
 * Return: returns the calculated value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

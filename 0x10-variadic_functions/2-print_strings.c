#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings separated by a @separator
 *
 * @separator: separator char
 * @n: number of integers passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s", "(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - a function that prints all agrs passed
 *
 * @format: is a list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list p;
	char c;
	unsigned int i = 0, len = strlen(format);

	va_start(p, format);
	while (*(format + i))
	{
		c = format[i];
		if (c == 'c' || c == 'i' || c == 's' || c == 'f')
		{
			switch (c)
			{
				case 'c':
					printf("%c", va_arg(p, int));
					break;
				case 'i':
					printf("%d", va_arg(p, int));
					break;
				case 's':
					printf("%s", va_arg(p, char *));
					break;
				case 'f':
					printf("%f", va_arg(p, double));
					break;
			}
		}
		if (i != len - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

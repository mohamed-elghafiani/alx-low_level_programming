#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from.
 *
 * Return: always 0
 */

int main(void)
{
	printf(__FILE__ "\n");
	return (0);
}

#include "main.h"
/**
 * print_line - drawas a striaght line in the terminal
 * @n: the number of times the _ character should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}

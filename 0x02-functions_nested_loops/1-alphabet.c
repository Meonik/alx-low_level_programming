#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Return: void
 */

void print_alphabet(void)
{
/* print_alphabet function has a prototye in main.h */
/*and has been called in 1-main.c*/
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

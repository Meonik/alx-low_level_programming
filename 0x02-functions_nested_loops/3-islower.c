#include "main.h"
/**
 * _islower - checks if characters are in lowercase.
 * @c: parameter for the character to be checked.
 * Return: returns 1 if character is lowercase or 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

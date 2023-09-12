#include "main.h"
/**
 * _isalpha - this function checks if characters are alphabetic.
 * @c: The character to be checked.
 * Return: returns 1 if c is an alphabet or 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include "main.h"
/**
 * _isupper - checks if a character is uppercase or not.
 * @c: the character to be checked.
 * Return: returns 1 if true and 0 if false.
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

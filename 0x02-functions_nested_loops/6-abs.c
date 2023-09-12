#include "main.h"
/**
 * _abs -  computes the absolute value of the integer given.
 * @c: the number to be computeded.
 * Return: the absolute value of c or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

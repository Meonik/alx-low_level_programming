#include "main.h"
#include <stdio.h>

/**
 * times_table - returns the 9 times table
 *
 * Return: void
 */

void times_table(void)
{	int m, n, r;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = m * n;
			if (m == 0)
			{
			printf("%d,", r);
			}
			else
			{
			if (!(m == 9))
			{
			if (r >= 10)
				printf(" %d,", r);
			else
				printf("  %d,", r);
			}
			else if (m == 9)
			{
			if (r >= 10)
				printf(" %d$\n", r);
			else
				printf("  %d$\n", r);
			}
			}
		}
	}
	printf("\n");
}


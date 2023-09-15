#include <stdio.h>
/**
 * main - finds and prints the largest number that is prime
 * Return: always 0 successfully
 */

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			print /= 2;
			continue;
		}
		for (divisor = 3; divisior < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
			{
				prime /= divisor;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}

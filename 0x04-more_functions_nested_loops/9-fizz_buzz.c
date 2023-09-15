#include <stdio.h>
/**
 * main - prints from 1 to 100, but for  multiples of three.
 * Return: 0 always
 */

int main(void)
{
	int numb;

	for (numb = 1; numb <= 100; numb++)
	{
		if ((numb % 3) == 0 && (numb % 5) == 0)
			printf("FizzBuzz");
		else if ((numb % 3) == 0)
			printf("Fizz");
		else if ((numb % 5) == 0)
			printf("Buzz");
		else
			printf("%d", numb);
		if (numb == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

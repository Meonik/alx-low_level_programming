#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0 if successful
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
		printf("Last digts of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digts of %d is %d and is zero\n", n, l);
	else if (l < 6 && l != 0)
	printf("Last digts of %d is %d and is greater than 5\n", n, l);
	return (0);
}

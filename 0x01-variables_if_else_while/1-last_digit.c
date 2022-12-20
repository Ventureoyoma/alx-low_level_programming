#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -  a c code that print the last digit of a random number
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	return (0);
}


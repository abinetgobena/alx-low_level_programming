#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - assigns a random number to int n everytime
 * it is executes and prints out based on condition
 * Return: Alaways 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
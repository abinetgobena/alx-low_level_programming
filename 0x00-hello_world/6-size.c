#include <stdio.h>

/**
 * main - prints the size of the various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size ofa char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof (long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}


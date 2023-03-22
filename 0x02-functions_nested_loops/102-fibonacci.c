#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int n1, n2, sum;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		sum = n1 + n2;
		printf(", %ld", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}

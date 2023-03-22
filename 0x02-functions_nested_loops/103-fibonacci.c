#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, sum, sumeven;

	n1 = 1;
	n2 = 2;
	sum = sumeven = 0;
	while (sum <= 4000000)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if ((n1 % 2) == 0)
		{
			sumeven += n1;
		}
	}
	printf("%ld\n", sumeven);
	return (0);
}

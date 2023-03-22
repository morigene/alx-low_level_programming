#include <stdio.h>
/**
 * main - entry point for executing program
 * Return: always 0 success
 */

int main(void)
{
	int i;
	int n;
	int sum;

	i = 0;
	n = 1024;
	sum = 0;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
		printf("%d\n", sum);

	return (0);
}

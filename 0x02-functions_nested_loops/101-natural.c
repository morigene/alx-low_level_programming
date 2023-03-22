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

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		i++;
	}
		printf("%d\n", sum);

	return (0);
}

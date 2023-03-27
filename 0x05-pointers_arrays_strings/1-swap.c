#include "main.h"

/**
 *swap_int - swap two integers
 *@num1: first integer
 *@num2: second integer
 *Return: no return
 */

void swap_int(int *num1, int *num2)
{
	int swap = *num1;
	*num1 = *num2;
	*num2 = swap;
}

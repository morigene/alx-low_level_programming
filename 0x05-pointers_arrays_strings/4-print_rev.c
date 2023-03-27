#include "main.h"
/**
 * print_rev - prints a string, in reverse, folloed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count;
	int len;

	len = strlen(s);
	for (count = len; count > 0 ; count--)
	{
	_putchar(s[count]);
	}

	_putchar('\n');
}

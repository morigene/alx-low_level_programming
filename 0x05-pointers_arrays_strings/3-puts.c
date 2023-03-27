#include "main.h"

/**
 *_puts - print a string followed by new line
 *@str: input string
 *Return: no return
 */

void _puts(char *str)
{
	int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n')

}

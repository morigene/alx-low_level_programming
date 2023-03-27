#include "main.h"

/**
 *_strlen - this is function that count the length of string and turn number
 *@s: input string
 *Return: lenth of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

#include "main.h"
/**
 * _isalpha - check character is alphabet letter
 * @c: integer to be tested
 * Return: 0 always success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Letter Another cases, shows 0
 * @c: The character to be checked
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
else
	{
		return (0);
	}
_putchar('\n');
}

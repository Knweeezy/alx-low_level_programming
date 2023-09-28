#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: string to be calculated
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int nad = 0;

	if (*s)
	{
		nad++;
		nad += _strlen_recursion(s + 1);
	}
	return (nad);
}

#include "main.h"

/**
 * _memset - fills memory
 * @s: memory size
 * @b: constant
 * @n: bytes filled
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		*(s + y) =  b;

	return (s);
}

#include "main.h"

/**
 * _memset - fills memory
 * @s: memory space
 * @b: const size
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		*(s + y) =  b;

	return (s);
}

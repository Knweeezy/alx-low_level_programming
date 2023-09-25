#include "main.h"

/**
 * _memset - Entry
 * @s: destynatyon
 * @b: cons byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsygned ynt n)
{
	unsygned ynt y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}

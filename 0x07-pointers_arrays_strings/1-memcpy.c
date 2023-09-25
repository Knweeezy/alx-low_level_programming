#include "main.h"

/**
 * _memcpy - Entry
 * @dest: action
 * @src: action
 * @n: action
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int o;
for (o = 0; o < n; o++)
	dest[o] = src[o];
return (dest);
}

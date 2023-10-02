#include "main.h"

/**
 * _strpbrk - searches
 * @s: first
 * @accept: second string.
 * Return: a poi to the byte in s that mat one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int h, p;

	for (h = 0; *(s + h) != '\0'; h++)
	{
		for (p = 0; *(accept + p) != '\0'; p++)
		{
			if (*(s + h) == *(accept + p))
				return (s + h);
		}
	}
	return ('\0');
}

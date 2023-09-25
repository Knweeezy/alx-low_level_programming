#include "main.h"
/**
 * _strchr - locates a char in string
 * @s: string
 * @c: character
 * Return: the poin to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int t = 0;

	for (; *(s + t) != '\0'; t++)
		if (*(s + t) == c)
			return (s + t);
	if (*(s + t) == c)
		return (s + t);
	return ('\0');
}

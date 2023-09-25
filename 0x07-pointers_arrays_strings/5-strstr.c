#include "main.h"

/**
 * _strstr - finds
 * needle in the string haystack
 * @haystack: enti
 * @needle: sub
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bha;
	char *pne;

	while (*haystack != '\0')
	{
		bha = haystack;
		pne = needle;

		while (*haystack != '\0' && *pne != '\0' && *haystack == *pne)
		{
			haystack++;
			pne++;
		}
		if (!*pne)
			return (bha);
		haystack = bha + 1;
	}
	return (0);
}

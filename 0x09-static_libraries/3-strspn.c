#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: initial seg
 * @accept: accepted
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nad, nad2, b;

	for (nad = 0; *(s + nad) != '\0'; nad++)
	{
		b = 1;
		for (nad2 = 0; *(accept + nad2) != '\0'; nad2++)
		{
			if (*(s + nad) == *(accept + nad2))
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
			break;
	}
	return (nad);
}

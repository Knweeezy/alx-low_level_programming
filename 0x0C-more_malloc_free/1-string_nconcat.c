#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates
 * @s1: The first
 * @s2: The second
 * @n: The maximum
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *co;
	unsigned int nad = n, dex;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (dex = 0; s1[dex]; dex++)
		nad++;

	co = malloc(sizeof(char) * (nad + 1));

	if (co == NULL)
		return (NULL);

	nad = 0;

	for (dex = 0; s1[dex]; dex++)
		co[nad++] = s1[dex];

	for (dex = 0; s2[dex] && dex < n; dex++)
		co[nad++] = s2[dex];

	co[nad] = '\0';

	return (co);
}

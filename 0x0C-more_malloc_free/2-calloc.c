#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates
 * @nmemb: The number
 * @size: The byte
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *full;
	unsigned int dex;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	full = m;

	for (dex = 0; dex < (size * nmemb); dex++)
		full[dex] = '\0';

	return (m);
}

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates mem
 * @b: The number
 *
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *tt = malloc(b);

	if (tt == NULL)
		exit(98);

	return (tt);
}

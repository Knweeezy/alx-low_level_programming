#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates
 * @min: The first
 * @max: The last
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *rry, dex, ty;

	if (min > max)
		return (NULL);

	ty = max - min + 1;

	rry = malloc(sizeof(int) * ty);

	if (rry == NULL)
		return (NULL);

	for (dex = 0; dex < ty; dex++)
		rry[dex] = min++;

	return (rry);
}

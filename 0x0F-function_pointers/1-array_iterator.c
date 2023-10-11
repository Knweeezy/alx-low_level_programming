#include "function_pointers.h"

/**
 * array_iterator - Executes
 * @array: The array
 * @size: The size
 * @action: A pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

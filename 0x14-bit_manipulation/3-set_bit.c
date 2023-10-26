#include "main.h"

/**
 * set_bit - sets
 * @n: the number
 * @index: the bit to
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}

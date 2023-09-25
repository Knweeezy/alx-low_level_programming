#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints
 * diagonals of a square matrix of integers
 * @a: hi
 * @size: size
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int var, nad1 = 0, nad2 = 0;

	for (var = 0; var < (size * size); var++)
	{
		if (var % (size + 1) == 0)
			nad1 += *(a + var);
		if (var % (size - 1) == 0 && var != 0 && var < size * size - 1)
			nad2 += *(a + var);
	}
	printf("%d, %d\n", nad1, nad2);
}

#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: Input
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= fact(n - 1);

	return (fact);
}

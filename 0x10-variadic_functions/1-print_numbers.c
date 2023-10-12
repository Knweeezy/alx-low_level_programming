#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints
 * @separator: The
 * @n: The num
 * @...: A variable number of numbe
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int op;

	va_start(nums, n);

	for (op = 0; op < n; op++)
	{
		printf("%d", va_arg(nums, int));

		if (op != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

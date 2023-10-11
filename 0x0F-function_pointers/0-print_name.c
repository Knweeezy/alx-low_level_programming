#include "function_pointers.h"

/**
 * print_name - Print
 * @name: The name
 * @f: A pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

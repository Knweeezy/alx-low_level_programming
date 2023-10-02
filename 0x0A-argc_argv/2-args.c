#include <stdio.h>

/**
 * main - Prints
 * @argc: The number
 * @argv: An array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int nad;

	for (nad = 0; nad < argc; nad++)
		printf("%s\n", argv[nad]);

	return (0);
}

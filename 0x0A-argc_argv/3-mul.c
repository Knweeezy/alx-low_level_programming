#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints
 * @argc: The number
 * @argv: An array
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int nad1, nad2, re;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nad1 = atoi(argv[1]);
	nad2 = atoi(argv[2]);
	re = nad1 * nad2;

	printf("%d\n", re);

	return (0);
}

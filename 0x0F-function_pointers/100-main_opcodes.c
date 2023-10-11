#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints
 * @argc: The number
 * @argv: An array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bda, dex;
	int (*address)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bda = atoi(argv[1]);

	if (bda < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (dex = 0; dex < bda; dex++)
	{
		op = *(unsigned char *)address;
		printf("%.2x", op);

		if (dex == bda - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}

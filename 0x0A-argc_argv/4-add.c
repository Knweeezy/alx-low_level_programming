#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print
 * @argc: The number
 * @argv: An array
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int nad, de, nat = 0;

	for (nad = 1; nad < argc; nad++)
	{
		for (de = 0; argv[nad][de]; de++)
		{
			if (argv[nad][de] < '0' || argv[nad][de] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		nat += atoi(argv[nad]);
	}

	printf("%d\n", nat);

	return (0);
}

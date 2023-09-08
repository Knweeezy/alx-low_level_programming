#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program will print from a to z
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar("%cx");
		x++,
	}
	putchar("\n");
	return (0);
}


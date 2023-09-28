#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns
 * @s: The string
 *
 * Return: The length
 */
int find_strlen(char *s)
{
	int nad = 0;

	if (*(s + nad))
	{
		nad++;
		nad += find_strlen(s + nad);
	}

	return (nad);
}

/**
 * check_palindrome - Checks
 * @s: The string
 * @len: The length
 * @index: The index
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks
 * @s: The string
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int dex = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, dex));
}

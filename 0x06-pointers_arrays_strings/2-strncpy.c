#include "main.h"

/**
 * _strncpy - Copies at most an input
 * of bytes from src into dest
 * @dest: the buffer store the number
 * @src: the string
 * @n: the max number of bytes
 * Return: A pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)

{
int nad = 0, src_len = 0;

while (src[nad++])
	src_len++;
for (nad = 0; src[nad] && nad < n; nad++)
	dest[nad] = src[nad];
for (nad = src_len; nad < n; nad++)
	dest[nad] = '\0';

return (dest);
}

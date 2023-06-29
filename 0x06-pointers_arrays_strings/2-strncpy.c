#include "main.h"

/**
 * _strncpy - Copies a string from src to dest, limited to n bytes.
 * @dest: The destination string to receive the copied string.
 * @src: The source string from which the string will be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

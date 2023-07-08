#include "main.h"

/**
 * _strncpy - Copies at most 'n' characters from
 * the 'src' string
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Max number of characters to copy from 'src'.
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

#include "main.h"

/**
 * _strncat - Concatenates at most 'n' characters from
 * the 'src' string
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Max number of characters to concatenate from 'src'.
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

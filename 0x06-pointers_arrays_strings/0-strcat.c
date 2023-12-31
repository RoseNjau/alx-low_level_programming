#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string to store the concatenated result.
 * @src: String to be appended to the destination string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}

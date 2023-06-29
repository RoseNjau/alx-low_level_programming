#include "main.h"

/**
 * _strncat - Concatenates two strings, using up to n bytes from src.
 * @dest: The string where the source string will be appended.
 * @src: The string to be appended to the destination string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int dest_len = 0;

	while (*ptr != '\0')
	{
		ptr++;
		dest_len++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	if (n == 0)
		*ptr = '\0';

	return (dest);
}

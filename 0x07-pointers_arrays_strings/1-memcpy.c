#include <stdio.h>

/**
 * _memcpy - Copies 'n' bytes from the source memory to destination memory.
 *
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (original_dest);
}

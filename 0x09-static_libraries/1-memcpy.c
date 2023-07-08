#include "main.h"

/**
 * _memcpy - Copies 'n' bytes from the memory area pointed.
 *
 * @dest: Pointer to destination memory area.
 * @src: Pointer to source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

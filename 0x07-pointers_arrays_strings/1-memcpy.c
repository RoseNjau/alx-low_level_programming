#include <stdio.h>

/**
 * _memcpy - Copies 'n' bytes from 'src' to 'dest'
 * @dest: Pointer to the destination array
 * @src: Pointer to the source array
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
		*dest++ = *src++;

	return (original_dest);
}
int main(void)
{
	char src[] = "Hello, world!";
	char dest[20];

	_memcpy(dest, src, sizeof(src));

	printf("Copied string: %s\n", dest);

	return (0);
}


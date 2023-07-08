#include "main.h"
/**
 * _memset - Fills a block of memory with a precise value
 * @s: The starting address of memory
 * @b: Expected value
 * @n: Number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

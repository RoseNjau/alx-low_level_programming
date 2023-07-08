#include "main.h"

/**
 * _strpbrk - Searches string 's' for any
 * character from string 'accept'.
 *
 * @s: Pointer to string to be inspected
 * @accept: Pointer to string containing
 * characters to inspect for.
 *
 * Return: Pointer to first occurrence of
 * any character from 'accept' in 's',
 * or NULL if that character isn't found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}

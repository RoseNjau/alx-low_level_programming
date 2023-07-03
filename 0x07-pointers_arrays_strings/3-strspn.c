#include "main.h"
/**
 * _strspn - Calculates the length of the initial segment of 's'
 * that consists of only characters from 'accept'.
 *
 * @s: Pointer to the input string.
 * @accept: input
 * Return: Length of the prefix substring in 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}


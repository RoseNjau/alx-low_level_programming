#include "main.h"

/**
 * _strspn - Calculates length of initial
 * segment of the string 's'
 *
 * @s: Pointer to string to be evaluated
 * @accept: Pointer to string containing
 * characters to be matched.
 *
 * Return: The length of the initial segment of 's'
 *
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

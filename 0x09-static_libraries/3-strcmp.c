#include "main.h"

/**
 * _strcmp - Compares strings 's1' and 's2' lexicographically.
 *
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 *
 * Return: An integer less than, equal to,
 * or greater than zero if 's1' is found to be
 * less than, equal to, or greater than 's2' respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}

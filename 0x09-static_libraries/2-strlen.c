#include "main.h"

/**
 * _strlen - Calculates string 's' length,
 * excluding terminating null character.
 *
 * @s: Pointer to string.
 *
 * Return: Length of string 's'.
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

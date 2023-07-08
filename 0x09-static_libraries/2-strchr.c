#include "main.h"
#include <stddef.h>

/**
 * _strchr - Searches for first occurrence
 * of the character 'c' in the string 's'.
 *
 * @s: Pointer to string to be searched.
 * @c: Character to search for.
 *
 * Return: Pointer to first occurrence
 * of 'c' in 's', or NULL if 'c' isn't found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

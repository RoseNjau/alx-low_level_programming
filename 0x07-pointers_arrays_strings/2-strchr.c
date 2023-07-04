#include "main.h"

/**
 * _strchr - First occurrence
 * of the character c in the string s.
 *
 * @s: String to be searched.
 * @c: Character to locate.
 *
 * Return: Pointer to either first occurrence of c in s,
 * or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

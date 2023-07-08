#include "main.h"

/**
 * _strstr - Searches for first occurrence of
 * the substring 'needle' in the string 'haystack'.
 *
 * @haystack: Pointer to string to be inspected
 * @needle: Pointer to the substring to inspect.
 *
 * Return: Pointer to first occurrence of
 * 'needle' in 'haystack',
 * or NULL if 'needle' isn't found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

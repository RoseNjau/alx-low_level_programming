#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: String to be searched.
 * @needle: Substring to search for.
 *
 * Return: Pointer to the commencement of the
 * located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (NULL);
}

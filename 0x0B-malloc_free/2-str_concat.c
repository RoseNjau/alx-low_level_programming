#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len2 = (s2 != NULL) ? strlen(s2) : 0;
	size_t totalLen = len1 + len2 + 1;

	char *concatenated = malloc(totalLen * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	if (s1 != NULL)
		memcpy(concatenated, s1, len1);
	if (s2 != NULL)
		memcpy(concatenated + len1, s2, len2);

	concatenated[totalLen - 1] = '\0';

	return (concatenated);
}


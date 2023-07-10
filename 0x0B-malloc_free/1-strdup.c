#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the newly allocated duplicated string,
 *         or NULL if insufficient memory was available or if str is NULL.
 */

char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);

	memcpy(dup, str, len);

	return (dup);
}

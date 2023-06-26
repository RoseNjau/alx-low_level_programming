#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	if (s == NULL)
	return;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--, j = 0; j < i; i--, j++)
	{

	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	}
}


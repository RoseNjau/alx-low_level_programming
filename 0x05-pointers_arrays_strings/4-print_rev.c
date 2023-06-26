#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i;

	if (s == NULL)
	return;

	for (i = 0; s[i] != '\0'; i++)
	;

	for (i--; i >= 0; i--)
	_putchar(s[i]);

	_putchar('\n');
}


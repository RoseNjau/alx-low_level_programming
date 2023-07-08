#include "main.h"

/**
 * _puts - Writes string 's' to the standard
 * output followed by a newline character.
 *
 * @str: Pointer to the string to be rephrased
 *
 * Return: None
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

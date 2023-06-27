#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line
 * @str: Pointer to a string
 *
 * Description: This function prints every other character of the string
 * pointed to by 'str', followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;
int j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

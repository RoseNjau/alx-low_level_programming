#include "main.h"

/**
 * set_string - Sets value of a pointer to a char.
 *
 * @s: Double pointer.
 * @to: Pointer to the char
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}

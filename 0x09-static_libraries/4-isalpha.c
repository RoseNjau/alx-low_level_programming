#include "main.h"

/**
 * _isalpha - Checks if given character 'c' is alphabetic
 *
 * @c: Character to be examined
 *
 * Return: A non-zero value if 'c' is
 * alphabetic, 0 if otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

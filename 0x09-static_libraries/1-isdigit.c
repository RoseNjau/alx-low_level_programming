#include "main.h"

/**
 * _isdigit - Evaluates if a character is a digit.
 *
 * @c: The character to be evaluated
 *
 * Return: A non-zero value if @c is a digit,
 * 0 if otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

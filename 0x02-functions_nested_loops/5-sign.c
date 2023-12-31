#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if number is positive, 0 if zero, -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1); /* Positive number */
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0); /* Zero */
	}
	else
	{
		_putchar('-');
		return (-1); /* Negative number */
	}
}

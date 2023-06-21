#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number to extract the last digit from.
 *
 * Return: The last digit of the given number.
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10; /* Compute the remainder when divided by 10 */

	if (last_digit < 0)
		last_digit = -last_digit; /* Convert negative last digit to positive */

	_putchar(last_digit + '0'); /* Print the last digit */

	return (last_digit);
}

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @num: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the given integer.
 */
int _abs(int num)
{
	if (num < 0)
		return (-num); /* Return the negation of num */
	else
		return (num); /* Return num as it is (already positive or zero) */
}

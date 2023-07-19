#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns difference of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns product of 2 numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: Quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainder of division of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: Remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

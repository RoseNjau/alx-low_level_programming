#include "main.h"
/**
 * swap_int - exchanges the values of two integers
 * @a: to swap with b
 * @b: to swap with a
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

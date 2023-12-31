#include "main.h"

/**
 * print_diagsums - Prints sum of
 * two diagonals of a square matrix of integers.
 *
 * @a: Square matrix.
 * @size: Size of square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

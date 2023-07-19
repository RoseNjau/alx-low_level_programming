#include "main.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to integer array.
 * @size: Number of elements in array.
 * @cmp: Pointer to a function that takes an integer as a parameter
 *  and returns an integer.
 *
 * Description: The function searches for an integer in an array
 *  using the availed cmp function to each element.
 *
 * Return: Index of the first element where the cmp function
 *   does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

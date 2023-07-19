#include "main.h"

/**
 * array_iterator - Executes a function on every array's element
 * @array: Pointer to an integer array.
 * @size: Array's size
 * @action: Pointer to function
 *
 * Description: Function that returns void. It iterates
 *  through the array and applies given
 *  function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

#include "function_pointers.h"
/**
 * array_iterator - main
 * @array: int
 * @size: size_t
 * @action: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && size != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}

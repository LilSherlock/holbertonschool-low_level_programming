#include "function_pointers.h"
/**
 * array_iterator - main
 * @array: int
 * @size: size_t
 * @action: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}
}

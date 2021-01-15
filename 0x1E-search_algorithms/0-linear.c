#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the interger array to search through
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: The first index where value is located
 *         -1 if array is NULL
 *         -1 if the value is not present in array
 */
int linear_search(int *array, size_t size, int value)
{
    size_t x = 0;

    if (array == NULL)
        return (-1);

    while (x < size)
    {
        printf("Value checked array[%zu] = [%d]\n", x, array[x]);
        if (array[x] == value)
            return (x);
        x++;
    }
    return (-1);
}

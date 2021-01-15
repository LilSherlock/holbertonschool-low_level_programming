#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
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

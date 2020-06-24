#include "holberton.h"
/**
* swap_int - main
* @a: int
* @b: int
*/
void swap_int(int *a, int *b)
{
	int A, B;

	A = *a;
	B = *b;

	*a = B;
	*b = A;
}

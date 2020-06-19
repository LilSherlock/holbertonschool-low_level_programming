#include "holberton.h"
/**
* print_triangle - main
* @size: int
*/
void print_triangle(int size)
{
	int spaces = 0, numeral = 0, repeterA = 0, repeterC = size;
	int repeterD = 0, ah = 0;

	if (size == 0)
	{
		_putchar('\n');
	}
	while (repeterA < size)
	{
		repeterC--;
		while (spaces < repeterC)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar('#');
		spaces = 0;
		while (numeral < repeterD)
		{
			while (ah < repeterD)
			{
				_putchar('#');
				ah++;
			}
			ah = 0;
			numeral++;
		}
		repeterD++;
		repeterA++;
		_putchar('\n');
	}
}

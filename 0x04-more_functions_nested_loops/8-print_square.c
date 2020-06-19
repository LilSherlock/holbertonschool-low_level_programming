#include "holberton.h"
/**
* print_square - main
*/
void print_square(int size)
{
	int top = 0, tap = 0, numeral = 35;

	if (size != 0)
	{
		while (top < size)
		{
			while (tap < size)
			{
				_putchar(numeral);
				tap++;
			}
			tap = 0;
			_putchar('\n');
			top++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

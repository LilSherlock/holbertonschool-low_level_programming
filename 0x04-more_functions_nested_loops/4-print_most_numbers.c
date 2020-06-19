#include "holberton.h"
/**
 * print_most_numbers - main
 */
void print_most_numbers(void)
{
	int zero = 48;

	while (zero <= 57)
	{
		if (zero != 50 && zero != 52)
		{
			_putchar(zero);
		}
		zero++;
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * more_numbers - main
 */
void more_numbers(void)
{
	int repeater = 0, numbers = 0;
	{
		while (repeater < 10)
		{
			while (numbers < 15)
			{
				if (numbers > 9)
				{
					_putchar((numbers / 10) + '0');
					_putchar((numbers % 10) + '0');
				}
				else
				{
					_putchar(numbers + '0');
				}
				numbers++;
			}
			numbers = 0;
			printf("\n");
			repeater++;
		}
	}
}

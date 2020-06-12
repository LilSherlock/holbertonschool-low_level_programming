#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int number = 48;

	while (number >= 48 && number <= 57)
	{
		if (number >= 49)
		{
			putchar(' ');
		}
		putchar(number);
		if (number != 57)
		{
			putchar(',');
		}
		number++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int number = 48;
	char letter = 'a';

	while (number >= 48 && number <= 57)
	{
		putchar(number);
		number++;
	}
	while (letter >= 'a' && letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

#include "holberton.h"
/**
* print_number - main
* @n: int
*/
void print_number(int n)
{
	int digit = 0, secondDigit = 0, activar = 0;

	if (n < 0)
	{
		n = n * (-1);
		activar = 1;
	}
	if (activar == 1)
	{
		_putchar('-');
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		digit = firstDigit(n);
		_putchar(digit + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		digit = n / 10;
		secondDigit = digit % 10;
		digit = digit / 10;
		_putchar (digit + '0');
		_putchar(secondDigit + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		morThat(n);
	}
}
/**
* firstDigit - main
* @a: int
* Return: a
*/
int firstDigit(int a)
{
	return (a / 10);
}
/**
* morThat - main
* @n: int
*/
void morThat(int n)
{
	int digit = 0, secondDigit = 0, thirdDigit = 0;

		digit = n / 10;
		secondDigit = digit % 10;
		digit = digit / 10;
		thirdDigit = digit % 10;
		digit = digit / 10;
		_putchar(digit + '0');
		_putchar(thirdDigit + '0');
		_putchar(secondDigit + '0');
		_putchar(n % 10 + '0');
}

#include "variadic_functions.h"
/**
 * sum_them_all - main
 * @n: int
 * Return: adds
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int addS = 0;
	va_list sum;

	if (n == 0)
		return (0);

	va_start(sum, n);

	while (x < n)
	{
		addS += va_arg(sum, int);
		x++;
	}
	va_end(sum);
	return (addS);
}

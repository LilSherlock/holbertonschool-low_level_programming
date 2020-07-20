#include "variadic_functions.h"
/**
 * print_numbers - main
 * @separator: char
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned x = 0;

	if (separator != NULL)
	{
		va_start(list, n);
		while (x < n)
		{
			if (x < n - 1)
			{
				printf ("%d%s", va_arg(list, int), separator);
			}
			else
				printf("%d", va_arg(list, int));
			x++;
		}
		va_end(list);
		putchar('\n');
	}
}

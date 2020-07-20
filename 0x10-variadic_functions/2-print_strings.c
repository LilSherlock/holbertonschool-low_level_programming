#include "variadic_functions.h"
/**
 * print_strings - main
 * @separator: char
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned x = 0;
    char *string; 

	if (separator != NULL)
	{
		va_start(list, n);
		while (x < n)
		{
            string = va_arg(list, char*);
			if (x < n - 1)
			{
				printf ("%s%s", string, separator);
			}
			else
				printf("%s", string);
			x++;
		}
		va_end(list);
		putchar('\n');
	}
}

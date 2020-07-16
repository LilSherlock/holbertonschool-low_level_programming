#include "function_pointers.h"
/**
 * print_name - main
 * @name: char
 * @f: char *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(f) (name);
	}
}

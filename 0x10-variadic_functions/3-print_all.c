#include "variadic_functions.h"
/**
 * print_all - main
 * @format: char
 */
void print_all(const char * const format, ...)
{
    va_list list;
    int x = 0, check = 0;
    char *string;

    va_start(list, format);
    while (format[x])
    {
        switch (format[i])
        {
        case 'c':
            printf("%c", va_arg(list, char)); 
            break;
        
        default:
            break;
        }
    }
}

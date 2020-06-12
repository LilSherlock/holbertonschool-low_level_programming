#include <stdio.h>

int main(void)
{
    int number = 0;

    while(number < 10)
    {
        printf("%d", number);
        number++;
    }
    putchar('\n');
    return (0);
}
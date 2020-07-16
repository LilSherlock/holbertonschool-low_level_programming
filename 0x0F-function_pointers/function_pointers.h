#ifndef HOLBY
#define HOLBY
<<<<<<< HEAD
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
=======

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif 
>>>>>>> 98952a836eb1042f4749c6cd0bf1aeb89e5ec45c

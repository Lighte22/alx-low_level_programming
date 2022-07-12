#include "main.h"

/**
 * swap_int - swap the int values of a and that of b
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int p;

p = *a;
*a = *b;
*b = p;
}

#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
    if (*s)

    _print_rev_recursion(s + 1);
    return
    _putchar(*s)
}
#include "main.h"

/**
 * _puts - print a string
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
if (str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}

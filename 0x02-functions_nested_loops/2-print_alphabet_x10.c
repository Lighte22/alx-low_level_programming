#include "main.h"

/**
 * print_alphabet_x10  - entry point
 * printing lowercase alphabet 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)

{
	char i;
	char c;

	for (i = 0; i < 10; i++)
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
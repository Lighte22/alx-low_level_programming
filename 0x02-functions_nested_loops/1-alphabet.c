#include "main.h"

/**
 * main - main block
 * Print_alphabet -> prints the lowercase alphabets
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

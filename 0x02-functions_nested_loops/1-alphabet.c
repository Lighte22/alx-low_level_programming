#include "main.h"
/**
 * main - main block
 * Description: A function that prints the alphabet, in lowercase
 * Return: always 0
 */
print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

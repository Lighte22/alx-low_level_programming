#include "main.h"

/**
* void_puts -> this is a function that puts
* @str: a param to _puts function
*/
void _putchar(char *str)
{
    for (; *str != '\0'; str++)
    {
        _putchar(str);
    }
    _putchar('\n');
}
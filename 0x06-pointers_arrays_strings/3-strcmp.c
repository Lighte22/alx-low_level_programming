#include "main.h"
/**
 * _strcmp - compare 2 string
 * @b1:string
 * @b2:strmp
 * Return:int
 */
int _strcmp(char *b1, char *b2)
{
	while (((*b1 != '\0') && (*b2 != '\0')) && (*b1 == *b2))
	{
		b1++;
		b2++;
	}

	if (*b1 == *b2)
	{
		return (0);
	}

	else
	{
		return (*b1 - *b2);
	}
}

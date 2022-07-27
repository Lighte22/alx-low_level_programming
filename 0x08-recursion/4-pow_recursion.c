#include "main.h"

/**
 * _pow_recursion - Recursively prints exponential of integers
 * @x: The integer to find the power of
 * @y: The power of the integer: x ^ y
 * Return: Returns either -1 for failure, 1 or the pow function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0) /* When y is 0 then x = x ^ 0 which equals 1 */
		return (1);
	return (x * _pow_recursion(x, y - 1)); /**
					     * This is a representation of x = x * x
					     * subscript y
					     */
}

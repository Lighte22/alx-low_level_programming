#include "main.h"

/**
 * check_prime - Check for prime num
 * @num: Number to be checked
 * @p: The iterator
 * Return: Either 1, 0 or recursive function
 */

int check_prime(int num, int p)
{
	if (p == num)
		return (1);

	if (num % p == 0)
		return (0);
	else
		return (check_prime(num, p + 1));
}

/**
 * is_prime_number - Calls the check_prime function
 * @n: The inputted number
 * Return: The check_prime function
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}

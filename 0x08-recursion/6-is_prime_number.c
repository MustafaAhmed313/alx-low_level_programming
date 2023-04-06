#include "main.h"

int check_prime(int n, int othrn);

/**
 * is_prime_number - determine whether n is  prime number
 * @n: integer
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if n is prime or not partially
 * @n: integer
 * @othrn: integer
 * Return: 0 or 1
 */

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}

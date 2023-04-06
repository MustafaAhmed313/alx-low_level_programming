#include "main.h"

int square(int n, int val);

/**
 * _sqrt_recursion - compute square root of n
 * @n: integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - check if val is square root of n or not
 * @n: integer number
 * @val: integer root of number n
 * Return: root of square root of n
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}



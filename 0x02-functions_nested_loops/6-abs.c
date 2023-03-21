#include "main.h"
/**
 * _abs - return absolute value of n.
 *
 * @n: an integer number
 *
 * Return: always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

#include "main.h"
/**
 * print_sign - return 0 if n = 0 and 1 if n > 0 and -1 if n < 0.
 *
 * @n: an integer number
 *
 * Return: always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

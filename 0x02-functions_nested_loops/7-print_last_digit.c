#include "main.h"
/**
 * print_last_digit - return value of last digit in n.
 *
 * @n: an integer number
 *
 * Return: always 0 (Success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

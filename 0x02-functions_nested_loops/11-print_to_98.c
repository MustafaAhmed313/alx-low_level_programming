#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98.
 *
 * @n: an integer
 *
 * Return: always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
}

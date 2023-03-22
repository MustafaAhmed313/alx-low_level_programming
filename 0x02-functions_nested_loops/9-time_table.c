#include "main.h"
#include <stdio.h>
/**
 * time_table - print time table.
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0 ; n <= 9 ; num++)
	{
		_putchar(48);
		for (mult = 1 ; mult <= 9 ; mult++)
		{
			_putchar('.');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10 + 48);
		}
		_putchar('\n');
	}
}

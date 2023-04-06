#include "main.h"

/**
 * _pow_recursion - compute x power y
 * @x: integer base
 * @y: integer exponent
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(y - 1));
	}
}

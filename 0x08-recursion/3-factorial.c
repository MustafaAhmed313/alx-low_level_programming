#include "main.h"

/**
 * factorial - compute factorial n
 *@n: integer
 * Return: facrorail n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n ==  0)
	{
		return (1);
	}
	else
	{
		return (n + factorial(n - 1));
	}
}

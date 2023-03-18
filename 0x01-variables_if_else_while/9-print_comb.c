#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print digits separated by comma consecutive representaion
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n == 9)
			putchar(n + '0');
		else
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

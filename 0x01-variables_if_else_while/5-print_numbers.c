#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print ten digits consecutive representaion
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}

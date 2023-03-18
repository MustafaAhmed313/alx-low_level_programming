#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print hexadecimal numbers consecutive representaion
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
		putchar(c);
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

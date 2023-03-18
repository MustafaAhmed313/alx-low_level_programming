#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet without e and q consecutive representaion
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}

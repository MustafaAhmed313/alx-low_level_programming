#include "main.h"

/**
 * swap_int - swap two pointers values
 *
 * @a: first integer pointer
 * @b: second integer pointer
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

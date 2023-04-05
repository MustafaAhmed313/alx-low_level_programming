#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chess board
 *
 * @a: two dimensional board
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8 ; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			printf("%c", a[itr][jtr]);
		}
		printf("\n");
	}
}
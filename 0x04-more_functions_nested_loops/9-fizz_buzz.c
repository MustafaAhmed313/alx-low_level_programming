#include <stdio.h>

/**
 * main - print numbers from 1 to 100 and make fizzbuzz test.
 *
 * Return: 0 Always (Success)
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}

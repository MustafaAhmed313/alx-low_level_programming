#include "main.h"

/**
* _strncat - concate 2 strings up to n bytes of the src string
*
* @dest: dest array of characters
* @src: src array of characters
* @n: number of bytes concated in the string
*
* Return: pointer of the concatenation string
*/

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		c1++;
	for (c2 = 0 ; c2 < n ; c2++)
		dest[c1++] = src[c2];
	return (dest);
}

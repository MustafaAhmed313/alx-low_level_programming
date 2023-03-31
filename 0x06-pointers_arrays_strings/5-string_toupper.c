#include "main.h"

/**
* string_toupper - turn any lowercase letter to uppercase letter
*
* @str: pointer to an array of characters
*
* Return: return the uppercase string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

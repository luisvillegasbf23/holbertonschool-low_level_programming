#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @s: Pointer
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}

#include "main.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @s: Pointer
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] > 96 && s[i] < 123)
		s[i] = s[i] - 32;

	for (; s[i]; i++)
	{
		if (s[i] == 9 || s[i] == 10 || s[i] == 32 || s[i] == 44
				|| s[i] == 59 || s[i] == 46 || s[i] == 40
				|| s[i] == 41 || s[i] == 34 || s[i] == 63
				|| s[i] == 33 || s[i] == 123 || s[i] == 125)
		{
				if (s[i + 1] > 96 && s[i + 1] < 123)
					s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}

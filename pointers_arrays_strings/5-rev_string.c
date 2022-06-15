#include "main.h"
#include <string.h>
/**
 * rev_string -  function that reverses a string.
 * @s: pointer
 * Return: Always 0
 */
void rev_string(char *s)
{
	int str, i, temp;

	for (str = 0 ; s[str]; str++) /** longitud del string */
		;
	for (i = 0; i < str / 2; i++)
	{
		temp = s[i];
		s[i] = s[str - i - 1];
		s[str - i - 1] = temp;
	}
}

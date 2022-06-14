#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	for (j = 0; s[j]; j++)
		;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

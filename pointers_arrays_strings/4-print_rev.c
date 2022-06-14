#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer
 * Return: Always 0
 */
void print_rev(char *s)
{
	int j = 0;

	for (j = 0; s[j]; j++)
		;
	for (j -= 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar(10);
}

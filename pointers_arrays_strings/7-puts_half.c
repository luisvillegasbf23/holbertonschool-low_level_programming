#include "main.h"
#include <stdio.h>
/**
 * puts_half - Write a function that prints half of a string,
 * followed by a new line.
 * @str: Pointer
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i]; i++) /** long */
		;
	j = i / 2;

	for (; str[j]; j++)
		_putchar(str[j]);
	_putchar(10);
}

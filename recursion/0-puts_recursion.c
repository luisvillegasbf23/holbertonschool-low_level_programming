#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line.
 * @s: Pointer
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);

}

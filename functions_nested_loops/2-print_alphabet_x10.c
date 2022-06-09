#include "main.h"
/*
 * print_alphabet_x10 - this function print the alphabet in lowercase x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i;
	char j;
	for (i = 1 ; i <= 10; i++)
	{
		for (j = 97; i <= 122; j++)
			_putchar(i);
		_putchar(10);
	}
}

#include "main.h"
/**
 * print_last_digit - This function print the last digit of a number
 * @l: The caracter to print
 * Return: x
 */
int print_last_digit(long int l)
{
	/* l = last number */
	/* when you use % 10 you will get the last digit */
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar((l % 10) + 48);
	return (l % 10);
}


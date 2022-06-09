#include "main.h"
/**
 * print_last_digit - This function print the last digit of a number
 * @l: The caracter to print
 * Return: x
 */
int print_last_digit(int n)
{
	int l = n % 10;	/* l = last number */
	/* when you use % 10 you will get the last digit */
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + 48);
	return (l);
}


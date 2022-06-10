#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: repetitions
 * Return: 0
 */
void print_diagonal(int n)
{
	int a, b, c = 0;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < c; b++)
			{
				_putchar(' ');
			}
			c += 1;
		_putchar('\\');
		_putchar('\n');
		}
	}
	else if (n <= 0)
		_putchar('\n');
}

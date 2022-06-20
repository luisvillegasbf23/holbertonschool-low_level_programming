#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: number
 * @y: exponent
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int temp;

	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	temp = x * _pow_recursion(x, y - 1);
	return (temp);
}

#include "main.h"
#include <stdlib.h>
/**
 * _abs - This function computes the absolute value of an integer.
 * @x: The caracter to print
 * Return: Always 0
 */
int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}

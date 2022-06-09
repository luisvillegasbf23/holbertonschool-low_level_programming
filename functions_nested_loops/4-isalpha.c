#include "main.h"
#include <ctype.h>
/**
 * _isalpha - This function check if is alpha
 * @c: the caracter to print
 * Return: c
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

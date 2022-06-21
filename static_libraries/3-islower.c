#include "main.h"
#include <ctype.h>
/**
 * _islower - this function check if it is lowercase
 * @c: the caracter to print
 * Return: ALways 0
 */
int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}

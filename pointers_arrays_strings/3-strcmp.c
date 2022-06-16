#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: if are equal 0, negative value if s1 is less than s2,
 * potisiuve value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;
	if (i < j)
		return (-1);
	else if (i > j)
		return (1);
	else
		return (0);

}

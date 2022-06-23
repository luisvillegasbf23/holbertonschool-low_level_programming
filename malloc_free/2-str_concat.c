#include "main.h"
/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char a = strlen(s1);
	char b = strlen(s2);
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = malloc(a + b + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		concat[i +j] = s2[j];
	}
	return (concat);
}

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: Pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

#include "main.h"

/**
 * _strlen - To return the length of a string.
 * @s: The string to be counted
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

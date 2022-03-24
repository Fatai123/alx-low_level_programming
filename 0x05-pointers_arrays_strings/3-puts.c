#include "main.h"

/**
 * _puts - To print a string, followed by a new to stdout
 *
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i;

	for(i = 0, str[i] != '\0', i++)
	{
		_putchar(str[i]);
	}

	_putchar ('\n');
}

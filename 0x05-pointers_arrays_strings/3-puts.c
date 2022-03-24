#include "main.h"

/**
 * _puts - To print a string, followed by a new to stdout
 *
 * @str: pointer to the string
 */
void _puts(char *str)
{
	char *c;
	int i;

	c = str;

	for(i = 0; c[i]; i++)
	{
		_putchar (c[i]);
	}

	_putchar ('\n');
}

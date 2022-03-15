#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 * Return: Always o (Success/correct)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar (alphabet);
		}

		alphabet++;
	}
	putchar ('\n');
	return (0);
}

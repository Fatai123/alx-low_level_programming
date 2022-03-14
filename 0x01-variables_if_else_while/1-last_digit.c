#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the random number assign to variable n 
 * each time the code is executed
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit %d is %d",  n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 not 0\n");
	return (0)
}

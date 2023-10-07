#include <stdio.h>

/**
 * main - Program that print number from 0 to 9.
 *
 * Return: Always 0 when succes.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

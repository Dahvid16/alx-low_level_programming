#include <stdio.h>

/**
 * main - Program that prints all the number of base 16 in lowercase.
 *
 * Return: 0 always when success.
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

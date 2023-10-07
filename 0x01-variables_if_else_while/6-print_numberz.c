#include <stdio.h>

/**
 * main - Program that prints numbers from 0 to 9.
 *
 * Return: Always 0 when succes.
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

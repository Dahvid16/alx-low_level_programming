#include <stdio.h>

/**
 * main - Program that prints the alphabet.
 *
 * Return: Always 0 when success
 */

int main(void)
{
 	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

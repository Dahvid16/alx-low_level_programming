#include <stdio.h>

/**
 * main - Program that prints lowercase alphabet in reverse.
 *
 * Return: 0 when succes
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

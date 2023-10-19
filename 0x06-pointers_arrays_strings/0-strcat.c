#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @scr: source string
 * Return: dest:
 */

char *_strcat(char *dest, char *scr)
{
	int destlen = 0;
	int scrlen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; scr[i] != '\0' ; i++)
		scrlen++;
	for (i = 0 ; i <= scrlen ; i++)
		dest[destlen + i] = scr[i];
	return (dest);
}

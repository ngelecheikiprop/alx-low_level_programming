#include "main.h"
/**
 *_strlen - counts length of a string.
 *@s: pointer
 *
 *Return: length of a string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

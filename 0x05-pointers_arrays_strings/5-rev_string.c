#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to reverse
 *
 *Return: nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	char *buffer;
	int n = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i > 0; i--)
	{
		*(buffer + n) = str[i];
		n++;
	}
	*str = *buffer;
}

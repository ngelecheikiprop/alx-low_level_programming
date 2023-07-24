#include "main.h"
/**
 *print_rev - prints a string, in reverse
 *, followed by a new line.
 *@s: string
 *
 *Return: nothing
 */
void print_rev(char *s)
{
	int len;
	char *p;
	int i;

	len = 0;
	p = s;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	for (i = (len -1); i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

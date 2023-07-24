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

	len = 0;
	p = s;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	while (len > 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

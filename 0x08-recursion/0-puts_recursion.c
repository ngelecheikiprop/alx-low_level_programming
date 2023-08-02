#include "main.h"
/**
  *_puts_recursion - prints a string, followed by a new line
  *@s: string to print.
  *
  *Return: Nothing
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

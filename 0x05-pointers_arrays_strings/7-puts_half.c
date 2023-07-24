#include "main.h"
/**
 *puts_half -  prints half of a string
 *@str: string
 *
 *Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int start_index;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	start_index = ((len - 1) / 2) + 1;
	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

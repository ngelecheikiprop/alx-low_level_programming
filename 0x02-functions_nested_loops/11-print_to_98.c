#include "main.h"
/**
 *print_to_98 - description
 *
 *Return: function of no return
 */
void print_to_98(int n)
{
	int i;
	/*blank line*/
	if(n < =98)
	{
		for(i = n; i < 98; i++)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (int i = n; i > 98; i--)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

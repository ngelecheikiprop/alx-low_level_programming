#include "main.h"
/**
 *print_to_98 - description
 *@n: number given by user
 *Return: function of no return
 */
void print_to_98(int n)
{
	int step;
	/*blank line*/
	step = (n <= 98) ? 1 : -1;
	while ( n != 98)
	{
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		n += step;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

#include "main.h"
/**
 *print_number - prints an integer.
 *@n: interger to print
 *
 *Return: function of no return
 */
void print_number(int n)
{
	unsigned int ones, tens, hundreds, thousands;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n >= 1000)
	{
		thousands = (n / 1000) % 10;
		_putchar(thousands  + '0');
	}
	if (n >= 100)
	{
		hundreds = (n / 100) % 10;
		_putchar(hundreds  + '0');
	}
	if (n >= 10)
	{
		tens = (n / 10) % 10;
		_putchar(tens + '0');
	}
	ones = n % 10;
	_putchar(ones + '0');
}

#include "main.h"
/**
  *print_number - prints a number
  *@n: the number to print
  *
  *Return: Nothing
  */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
		divisor = divisor * 10;
	while (divisor > 0)
	{
		_putchar(n / divisor + '0');
		n = n % divisor;
		divisor = divisor / 10;
	}
}


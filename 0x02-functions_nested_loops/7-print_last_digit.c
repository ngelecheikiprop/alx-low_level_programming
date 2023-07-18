#include "main.h"
/**
 *print_last_digit - print last digit
 *@number: given number
 *
 *Return: value of last digit
 */
int print_last_digit(int number)
{
	int remainder;
	/*blank line*/
	remainder = number % 10;
	_putchar(remainder);
	return (remainder);
}

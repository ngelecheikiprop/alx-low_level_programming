#include "main.h"
/**
 *print_last_digit - print last digit
 *@number: given number
 *
 *Return: value of last digit
 */
int print_last_digit(int number)
{
	int lastDigit;
	/*blank line*/
	number = (number < 0) ? - number : number;
	lastDigit = number % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}

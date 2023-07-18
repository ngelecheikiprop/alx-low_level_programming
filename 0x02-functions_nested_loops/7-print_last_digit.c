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
	lastDigit = number % 10;
	if (lastDigit < 0)
		lastDigit = lastDigit * -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}

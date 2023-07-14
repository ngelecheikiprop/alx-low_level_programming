#include <stdio.h>
/**
 * main - this is my entry point
 *
 * Return: I return a (0)
 *
 */
int main(void)
{
	int firstNumber;
	int secondNumber;
	/*blank line*/
	for (firstNumber = 1; firstNumber < 10; firstNumber++)
	{
		for (secondNumber = 0; secondNumber < 10; secondNumber++)
		{
			putchar(firstNumber + '0');
			putchar(secondNumber + '0');
			putchar(',');
			putchar(' ');
		}
	}
}

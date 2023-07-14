#include <stdio.h>
/**
 * main - this is my entry point
 *
 * Return: I return a (0)
 *
 */
int main(void)
{
	int number;
	/*blank*/
	putchar(0 + '0');
	for (number = 1; number < 10; number++)
	{
		putchar(',');
		putchar(number + '0');
		putchar(' ');
	}
	return (0);
}

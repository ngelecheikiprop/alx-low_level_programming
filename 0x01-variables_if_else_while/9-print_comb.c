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
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

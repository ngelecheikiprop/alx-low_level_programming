#include <stdio.h>
/**
 * main - everything is here
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	/*link*/
	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (j != 9 && i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 for main
 */
int main(void)
{
	int i;
	int j;
	int k;
	/*blank*/
	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

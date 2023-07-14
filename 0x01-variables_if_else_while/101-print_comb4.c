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
	for (i = 0; i < 9; i++)
	{
		for (j = 1 + i; j < 9; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
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

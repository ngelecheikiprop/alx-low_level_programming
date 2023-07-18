#include <stdio.h>
/**
 * main - this is the main
 *
 *Return: always 0
 */
int main(void)
{
	int i;
	int mul;
	/*blank line*/
	mul = 1;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			mul = mul * i;
		if((i % 5) == 0)
			mul = mul * i;
	}
	printf("%d\n",mul);
	return (0);
}

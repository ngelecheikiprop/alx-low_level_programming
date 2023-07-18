#include <stdio.h>
/**
 *main - starting point
 *
 *Return: always(0)
 */
int main(void)
{
	unsigned long fn;
	unsigned long sn;
	unsigned long nn;
	unsigned long i;
	/*blank line*/
	fn = 1;
	sn = 2;
	printf("%lu, %lu", fn, sn);
	for (i = 3; i <= 98; i++)
	{
		nn = fn + sn;
		printf(", %lu", nn);
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 *main - starting point
 *
 *Return: always(0)
 */
int main(void)
{
	unsigned long int fn;
	unsigned long int sn;
	unsigned long int nn;
	unsigned long int i;
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
}

#include <stdio.h>
/**
 *main - description
 *
 *Return: always (0)
 */
int main(void)
{
	long int fn;
	long int sn;
	long int nn;
	long int i;
	/*blank line*/
	fn = 1;
	sn = 2;
	printf("%ld, %ld", fn, sn);
	for (i = 3; i <= 50; i++)
	{
		nn = fn + sn;
		printf(", %ld", nn);
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

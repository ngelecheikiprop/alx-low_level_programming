#include <stdio.h>
/**
 *main - description
 *
 *Return: always (0)
 */
int main(void)
{
	int fn;
	int sn;
	int nn;
	int i;
	/*blank line*/
	fn = 1;
	sn = 2;
	printf("%d, %d, ", fn, sn);
	for (i = 3; i <= 50; i++)
	{
		nn = fn + sn;
		printf("%d, ", nn);
		fn = sn;
		sn = nn;
	}
	putchar('\n');
	return (0);
}

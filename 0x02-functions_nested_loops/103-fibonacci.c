#include <stdio.h>
/**
 *main - starting point
 *
 * Return: always (0)
 */
int main(void)
{
	int fn;
	int sn;
	int nn;
	int i;
	int sum;
	/*blank*/
	fn = 1;
	sn = 2;
	sum = 0;
	sum = 2 + sum;
	for (i = 3; i <= 50; i++)
	{
		nn = fn + sn;
		if (nn >= 4000000)
		{
			break;
		}
		if ((nn % 2) == 0)
			sum = sum + nn;
		fn = sn;
		sn = nn;
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
/**
 *main - starting point
 *
 *Return: always(0)
 */
int main(void)
{
	long double fn;
	long double sn;
	long double nn;
	long double i;
	/*blank line*/
	fn = 1;
	sn = 2;
	printf("%.0Lf, %.0Lf", fn, sn);
	for (i = 3; i <= 98; i++)
	{
		nn = fn + sn;
		if (i > 92 && i < 98)
			nn = nn + 1;
		if (i == 98)
			nn = nn + 2;
		printf(", %.0Lf", nn);
		if (i > 92 && i < 98)
			nn = nn - 1;
		if (i == 98)
			nn = nn -2;
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

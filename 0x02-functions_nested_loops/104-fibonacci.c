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
	int i;
	/*blank line*/
	fn = 1;
	sn = 2;
	printf("%.0Lf, %.0Lf", fn, sn);
	for (i = 3; i <= 98; i++)
	{
		nn = fn + sn;
		if (i == 96 | i == 97)
			printf(", %.0Lf", nn + 1);
		else if (i == 98)
			printf(", %.0Lf", nn + 2);
		else
			printf(", %.0Lf", nn);
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

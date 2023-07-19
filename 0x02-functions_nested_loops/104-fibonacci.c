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
	long double part1;
	long double part2;
	int large;
	int i;
	/*blank line*/
	large = 10000;
	fn = 1;
	sn = 2;
	printf("%.0Lf, %.0Lf", fn, sn);
	for (i = 3; i <= 98; i++)
	{
		nn = fn + sn;
		part1 = nn / large;
		part2 = nn % large;
	        printf(", %.0Lf%.0Lf", part1, part2);
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

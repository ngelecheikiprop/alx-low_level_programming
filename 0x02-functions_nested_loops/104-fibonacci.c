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
	unsigned long int part1;
	unsigned long int part2;
	int large;
	int i;
	/*blank line*/
	large = 10000;
	fn = 1;
	sn = 2;
	printf("%lu, %lu", fn, sn);
	for (i = 3; i <= 98; i++)
	{
		nn = fn + sn;
		if (nn > 1000)
		{
		part1 = nn / large;
		part2 = nn % large;
	        printf(", %lu%lu", part1, part2);
		}
		else
			printf(", %lu", nn);
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 *main - starting point
 *
 *Return: always(0)
 */
int main(void)
{
        __uint128_t fn;
	__uint128_t sn;
	__uint128_t nn;
	int i;
	/*blank line*/
	fn = 1U;
	sn = 2U;
	printf("%llu, %llu", fn, sn);
	for (i = 3; i <= 98; i++)
	{
		nn = fn + sn;
		if (i == 96 | i == 97)
			printf(", %llu", nn + 1);
		else if (i == 98)
			printf(", %llu", nn + 2);
		else
			printf(", %llu", nn);
		fn = sn;
		sn = nn;
	}
	printf("\n");
	return (0);
}

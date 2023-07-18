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
	/*blank line*/
	fn = 0;
	sn = 1;
	nn = 3;
	printf("%d\n%d\n", fn, sn);
	for (int i = 3; i <= 50; i++)
	{
		nn = fn + sn;
		printf("%d\n", nn);
		fn = sn;
		sn = nn;
	}
	return (0);
}

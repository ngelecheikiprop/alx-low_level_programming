#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
	{
		printf("%dis positive\n",n);
	}
	else if(n==0)
	{
		printf("%dis zero\n",n);
	}
	else if(n>0)
	{
		printf("%dis negative\n",n);
	}
	return (0);
}

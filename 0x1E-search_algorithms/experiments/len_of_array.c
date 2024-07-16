#include "experiments.h"

int len_of_array(int *array)
{
	int i = 0;

	while (array[i])
	{
		i++;
	}
	return i-1;
}
int main()
{
	int array[] = {
		1,2,3,4, 5, 6, 7, 8
	};
	printf("length is %d\n", len_of_array(array));
}

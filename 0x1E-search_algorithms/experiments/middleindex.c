#include "experiments.h"

int middle_index(int size)
{
        if (size % 2 == 0)
                return (size / 2 - 1);
        return (size / 2);
}

void main()
{
	printf("for size of 10 middle index is %d\n", middle_index(10));
}

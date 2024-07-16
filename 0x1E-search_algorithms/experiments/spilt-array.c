#include "experiments.h"

int *split_array(int *array, int start, int end)
{
        int j = 0;
        int i;
        int *newArray = malloc(sizeof(int) * ((end - start) + 1));

        for (i = start; i <= end; i++)
        {
                newArray[j] = array[i];
                j++;
        }
        return (newArray);
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    printf("splitted -->");
    int *splitted = split_array(array, 5,9);
    for (int i =0; i < 5; i++){
	    printf("%d",splitted[i]);
    }
}

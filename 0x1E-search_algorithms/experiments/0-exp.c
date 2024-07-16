/*know what the size of array does*/
#include "experiments.h"

int main()
{
  int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("%lu\n", size);
}

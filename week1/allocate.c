#include <stdio.h>
#include "stdlib.h"

int main(int argc, char const *argv[]) {
    int n = atoi(argv[1]);
    int* array = (int*)malloc(n);
    for(int i=0; i<n; i++)
    {
        array[i] = rand();
    }
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);

    int min = array[0];
    int max = array[0];
    for(int i=1; i<n; i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
        if(min > array[i])
        {
            min = array[i];
        }
    }

    printf("max is %d\n",max);
    printf("min is %d\n",min);

    return 0;
}

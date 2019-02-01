#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main(int argc, char const *argv[]) {
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);

    int* array = malloc(x*y*z*sizeof(int));
    for(int i=0; i<x*y*z; i++)
    {
        array[i] = rand();
    }

    int*** u = malloc(y*z*sizeof(int**));
    for(int i=0; i<x; i++)
    {
        u[i] = malloc(z*sizeof(int*));
        for(int j=0; j<y; j++)
        {
            u[i][j] = &(array[i*y*z + j*y]);
        }
    }

    printf("%d\n",u[2][2][2]);

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            free(u[i][j]);
        }
        free(u[i]);
    }
    free(u);

    return 0;
}

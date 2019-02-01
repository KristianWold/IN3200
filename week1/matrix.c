#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main(int argc, char const *argv[]) {
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);
    int** matrix = malloc(m*sizeof(int*));
    for(int row = 0; row<m; row++)
    {
        matrix[row] = malloc(n*sizeof(int));
    }

    clock_t t;

    t = clock();
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            matrix[i][j] = 5;
        }
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time used, first argument outer loop %f\n",time_taken);

    t = clock();
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            matrix[i][j] = 5;
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time used, second argument outer loop %f\n",time_taken);

    return 0;
}

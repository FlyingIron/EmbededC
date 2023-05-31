#include <stdio.h>
#include <stdlib.h>
#define N 9

void main()
{
    printf("Size of array is %d\n", N);

    int array[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            array[i][j] = 1 + i*N + j;
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
#define N 9

void main()
{
    printf("Size of array is %d.\nArray in order:\n", N);

    int array [N];

    for (int i = 0; i < N; i++)
    {
        array[i] = i+1;
        printf("%d ", array[i]);
    }

    printf("\nArray in reverse order:\n");

    for(int i = N - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}
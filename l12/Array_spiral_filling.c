#include <stdio.h>
#include <stdlib.h>
#define N 15

void main()
{
    printf("Size of array is %d\n", N);

    int array [N][N] = {0};

    int k = 1;
    int j = 0;

while (j <= (N/2))
    {
        for (int i = j; i <= N - j - 1; i++)
        {
            array [j][i] = k;
            k++;
        }

        for(int i = j + 1; i <= N - j - 1; i++)
        {
            array [i][N - j - 1] = k;
            k++;
        }

        for (int i = N - 2 - j; i >= j; i--)
        {
            array [N - j - 1][i] = k;
            k++;
        }

        for (int i = N - 2 - j; i >= j+1; i--)
        {
            array [i][j] = k;
            k++;
        }
        j++;
    }

    for(int s = 0; s < N; s++)
    {
        for(int t = 0; t < N; t++)
        {
            printf("%d|",array[s][t]);
        }
        printf("\n");
    }
}
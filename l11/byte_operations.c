#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number = 894367;
    printf("Given number = %d.\nNumber in bytes: 0x%x\n", number, number);

    for(int i = 0; i < sizeof(number); i++)
    {
        printf("№%d byte in given number: 0x%x\n", (i+1), ((number >> i*8)&0xFF));
    }
}
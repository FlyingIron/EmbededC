#include <stdlib.h>
#include <stdio.h>

void main ()
{
    int Number = 3387692;
    char* ptr;

    ptr = &Number;

    printf("Number in bytes: 0x%x\n", Number);

    printf("First byte is: %x\n", *ptr);
    printf("Second byte is: %x\n", *(ptr+1));
    printf("Third byte is: %x\n", *(ptr+2));
    printf("Fourth byte is: %x\n", *(ptr+3));

    *(ptr + 1) = 0xbb;

    printf ("We changed second byte to: %x\n", *(ptr+1));
    printf("Number in bytes after chaging: 0x%x\n", Number);
}
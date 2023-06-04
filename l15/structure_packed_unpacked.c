#include <stdlib.h>
#include <stdio.h>

struct unpacked
{
    char a;
    int b;
};

struct packed
{
    char a;
    int b;
} __attribute((packed));


void main()
{
    printf("size of unpacked stucture is: %d\n", sizeof(struct unpacked));
    printf("size of packed structure is: %d\n", sizeof(struct packed));

    char str[10] = {'A',0,0,0,0,'B',0,0,0,0};

    char str1[10] = {'A',0,0,0,0,'B',0,0,0,0};

    printf ("I create char array of 10 following elements: {A,0,0,0,0,B,0,0,0,0}\n");

    struct packed *packed_ptr;
    struct unpacked *unpacked_ptr;

    packed_ptr = &str;
    unpacked_ptr = &str1;

    printf("I can get access to str using pointer to packed structure.\nfirst structure: packed.a = %c, packed.b = %d.\n second structure: packed.a = %c, packed.b = %d\n",packed_ptr->a, packed_ptr->b,(packed_ptr+1)->a,(packed_ptr+1)->b ); 
    printf("Using pointer to normally assigned structure will give errors if I try to get access to str. Even segmentation faults may accur\n");
    printf("first structure: unpacked.a = %c, unpacked.b = %d.\n second structure: unpacked.a = %c, unpacked.b = %d\n",unpacked_ptr->a, unpacked_ptr->b,(unpacked_ptr+1)->a,(unpacked_ptr+1)->b);
}
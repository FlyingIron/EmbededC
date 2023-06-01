#include <stdlib.h>
#include <stdio.h>

void main ()
{
    char a = 'A';
    char b = 'B';

    char *ptr1;
    char **ptr2;

    ptr1 = &a;
    ptr2 = &ptr1;

    printf("&ptr2 = %p\n", &ptr2); //адрес ptr2
    printf("ptr2 = %p\n", ptr2); //адрес на указатель ptr1, хранящийся в ptr2
    printf("*ptr2 = %p\n", *ptr2); //адрес на переменную a, который хранится в указателе ptr1, доступ к которому получен через ptr2
    printf("**ptr2 = %c\n", **ptr2); //данные переменной a, доступ к которым был получен через ptr2

    //изменим то, куда указывает указатель ptr1 через указатель ptr2

    *ptr2 = &b;

    printf("I chanched ptr1 using ptr2 so now:\n");

    printf("&ptr2 = %p\n", &ptr2); //адрес ptr2
    printf("ptr2 = %p\n", ptr2); //адрес на указатель ptr1, хранящийся в ptr2
    printf("*ptr2 = %p\n", *ptr2); //адрес на переменную b, который хранится в указателе ptr1, доступ к которому получен через ptr2
    printf("**ptr2 = %c\n", **ptr2); //данные переменной b, доступ к которым был получен через ptr2

}
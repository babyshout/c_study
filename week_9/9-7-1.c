#include <stdio.h>

int main()
{
    char ch;
    char* p;
    char *q;

    ch = 'A';
    p = &ch;

    *q = 'Z';

    printf("ch is : %c \n", ch);
    printf("*p is : %c \n", *p);
    printf("*q is : %c \n", *q);

    printf("p is : %p \n", p);
    printf("q is : %p \n", q);

    return 0;
}

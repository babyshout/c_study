#include <stdio.h>

int main()
{
    int aa[3] = {10, 20, 30};

    printf("&aa[0]는 %p, aa+0은 %p \n", &aa[0], aa + 0);
    printf("&aa[1]는 %p, aa+1은 %p \n", &aa[1], aa + 1);
    printf("&aa[2]는 %p, aa+2은 %p \n", &aa[2], aa + 2);
    
    return 0;
}

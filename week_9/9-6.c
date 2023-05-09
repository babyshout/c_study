#include <stdio.h>

int main()
{
    char ch;
    char * p;	//문자형 변수와 포인터 변수를 선언함

    ch = 'A';
    p = &ch;	//문자 'A'를 ch에 대입하고 ch의 주소를 p에 대입함

    printf("ch가 가지고 있는 값: ch ==> %c \n", ch);
    printf("ch의 주소(address) : &ch ==> %p \n", &ch);
    printf("p가 가지고 있는 값 : p ==> %p \n", p);
    printf("p가 가리키는 곳의 실제값 : *p ==> %c \n", *p);

    return 0;
}

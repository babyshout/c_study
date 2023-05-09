#include <stdio.h>

int main()
{
    char ch;
    char *p;
    char *q;	//문자형 포인터 변수 p와 q를 선언함

    ch = 'A';
    p = &ch;	//ch의 주소값을 p에 대입함

    q = p;  //p의 값을 q에 대입함

    *q = 'Z';	//q가 가리키는 곳의 실제 값을 변경함 

    printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);

    return 0;
}

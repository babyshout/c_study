#include <stdio.h>

void myfunc();	//함수의 프로토타입을 선언함

int main()
{
    myfunc();
    myfunc();	//myfunc()함수를 두번 호출함

    return 0;
}

void myfunc()
{
    static int a = 0;	//static 예약어로 a 변수를 선언하고 초기화함

    a = a + 100;    //a를 100을 증가시킨 후 출력함
    printf("a의 값 ==> %d\n", a);
}

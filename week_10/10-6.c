#include <stdio.h>

int a = 100;	//전역변수 a를 선언하고 초기값을 대입함

int func1()
{
    int a = 200;    //지역변수 a를 선언하고 초기값을 대입함
    printf("func1()에서 a의 값 ==> %d \n", a);	//지역변수를 출력함
}

int main()
{
    func1();
    printf("main() 에서 a의 값 ==> %d \n", a);

    return 0;
}

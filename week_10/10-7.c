#include <stdio.h>

void func1()  //void 형 함수이므로 반환값이 없음
{
    printf("void 형 함수는 돌려줄게 없음. \n");
}

int func2() //int 형 함수이므로 반환값이 있음
{
    return 100;
}

int main()
{
    int a;
    
    func1();	//void 형 함수를 호출

    a = func2(); //int 형 함수를 호출
    printf("int 형 함수에서 돌려준 값 ==> %d \n", a);

    return 0;
}

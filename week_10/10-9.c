#include <stdio.h>

void func1(int *a)  //매개변수로 주소값(포인터)을 받음
{
    ++*a;
    //++*a == ++(*a), *a++ == (*a)++
    printf("전달받은 a ==> %d \n", *a);
    //printf("~~", *a++);   의 경우 뒤에서 사용되지 않아 값이 바뀌지 않음
//    *a++; 뒤에서 사용안되면 값이 바뀌지 않음
}

int main()
{
    int a = 10;

    func1(&a);	//함수를 호출할 때 a의 주소를 전달함
    printf("func1() 실행 후의 a ==> %d \n", a);
    //함수를 호출한 후 a 값을 출력함

    return 0;
}

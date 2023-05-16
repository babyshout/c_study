#include <stdio.h>

void func1 (char a, char b) //매개변수가 값인 함수
{
    int imsi;

    imsi = a;
    a = b;
    b = imsi;
    //두 문자를 교환함
}

void func2(char *a, char *b)	//매개변수가 주소인 함수
{
    int imsi;

    imsi = *a;
    *a = *b;
    *b = imsi;
    //두 문자를 교환함
}

int main()
{
    char x = 'A', y = 'Z';
    printf("원래 값\t\t: x = %c, y = %c \n", x, y);

    func1(x, y);
    printf("값을 전달한 후\t: x = %c, y = %c \n", x, y);
    //값을 전달해서 func1() 함수를 호출함

    func2(&x, &y);
    printf("주소를 전달한 후: x = %c, y = %c \n", x, y);
    //주소를 전달해서 func2() 함수를 호출함

    return 0;
}

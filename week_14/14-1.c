#include <stdio.h>

int main(int argc, char* argv[])    //매개 변수를 지정함
{
    int i;
    printf("argc 매개변수 ==> %d \n", argc);	//매개 변수의 개수를 출력함

    for(i = 0; i < argc; i++)
	printf("argv[%d] 매개변수 ==> %s \n", i, argv[i]);

    return 0;
}

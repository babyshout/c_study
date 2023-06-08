#include <stdio.h>

int main()
{
    union student { //공용체형 student를 선언함
	int tot;
	char grade;
    };

    union student u;	//공용체 변수 u를 선언함

    u.tot = 300;
    u.grade = 'A';  //공용체 변수의 멤버 변수를 값에 대입함

    printf("\n--- 공용체 활용 ---\n");	//공용체 변수의 멤버 변수값을 출력함
    printf("총점 ==> %d\n", u.tot);
    printf("등급 ==> %c\n", u.grade);

    return 0;
}

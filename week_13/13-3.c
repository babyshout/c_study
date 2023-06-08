#include <stdio.h>

int main()
{
    struct student {	//구조체형을 선언한 후 멤버 변수를 선언함
	char name[10];
	int kor;
	int eng;
	float avg;
    };

    struct student s;	//구조체 변수 s를 선언함

    printf("이름 : ");
    scanf("%s", s.name);    //학생 이름을 입력함

    printf("국어 점수 : ");
    scanf("%d", &s.kor);    //국어 점수를 입력함

    printf("영어 점수 : ");
    scanf("%d", &s.eng);    //영어 점수를 입력함

    s.avg = (s.kor + s.eng) / 2.0f; //평균 점수를 입력함

    printf("\n--- 구조체 활용 ---\n");
    printf("학생 이름 ==> %s\n", s.name);
    printf("국어 점수 ==> %d\n", s.kor);
    printf("영어 점수 ==> %d\n", s.eng);
    printf("평균 점수 ==> %5.1f\n", s.avg);

    return 0;
}

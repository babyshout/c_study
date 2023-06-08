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
    struct student *p;	//구조체 포인터 변수 p를 선언함

    p = &s; //포인터 변수 p에 s의 주소를 대입함

    printf("이름 입력 : ");
    scanf("%s", p -> name); //이름을 입력함

    printf("국어 점수 : ");
    scanf("%d", &p->kor);   //국어 점수를 입력함

    printf("영어 점수 : ");
    scanf("%d", &p->eng);   //영어 점수를 입력함

    p->avg = (p->kor + p->eng) / 2.0f;	//평균 점수를 계산함

    //학생 이름, 국어 점수, 영어 점수, 평균 점수를 출력함
    printf("\n--- 구조체 포인터 활용 ---\n");
    printf("학생 이름 ==> %s\n", p->name);
    printf("국어 점수 ==> %d\n", p->kor);
    printf("영어 점수 ==> %d\n", p->eng);
    printf("평균 점수 ==> %5.1f\n", p->avg);

    return 0;
}

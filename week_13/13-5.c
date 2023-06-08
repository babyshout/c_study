#include <stdio.h>
#include <string.h>

int main()
{
    struct student {	//구조체형을 선언함
	char name[10];
	int kor;
	int eng;
	float avg;
    };

    struct student s[3];    //구조체형 배열 s[3]을 선언함

    int i;

    strcpy(s[0].name, "Kim");	//첫번째 학생의 정보를 대입함
    s[0].kor = 90;
    s[0].eng = 80;
    s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

    strcpy(s[1].name, "Lee");	//두번째 학생의 정보를 대입함
    s[1].kor = 70;
    s[1].eng = 60;
    s[1].avg = (s[1].kor + s[1].eng) / 2.0f;

    strcpy(s[2].name, "Park");	//세번째 학생의 정보를 대입함
    s[2].kor = 50;
    s[2].eng = 40;
    s[2].avg = (s[2].kor + s[2].eng) / 2.0f;
    
    printf("-- 구조체 배열 --\n");
    for(i = 0; i < 3; i++)  //세번 반복해서 배열의 내용을 출력함
    {
	printf("학생 이름 ==> %s\n", s[i].name);
	printf("국어 점수 ==> %d\n", s[i].kor);
	printf("영어 점수 ==> %d\n", s[i].eng);
	printf("평균 점수 ==> %5.1f\n", s[i].avg);
	printf("\n");
    }

    return 0;
}

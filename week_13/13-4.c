#include <stdio.h>
#include <string.h>

int main()
{
    char name[3][10];	//학생 이름, 국어 점수, 영어 점수, 평균 점수 배열을 선언함
    int kor[3];
    int eng[3];
    float avg[3];

    int i;

    strcpy(name[0], "Kim"); //첫번째 학생의 정보를 입력함
    kor[0] = 90;
    eng[0] = 80;
    avg[0] = (kor[0] + eng[0]) / 2.0f;

    strcpy(name[1], "Lee"); //두번째 학생의 정보를 입력함
    kor[1] = 70;
    eng[1] = 60;
    avg[1] = (kor[1] + eng[1]) /2.0f;

    strcpy(name[2], "Park");	//세번째 학생의 정보를 입력함
    kor[2] = 50;
    eng[2] = 40;
    avg[2] = (kor[2] + eng[2]) / 2.0f;

    for(i = 0; i < 3; i++)  //세번 반복해서 배열의 내용을 출력함
    {
	printf("학생 이름 ==> %s\n", name[i]);
	printf("국어 점수 ==> %d\n", kor[i]);
	printf("영어 점수 ==> %d\n", eng[i]);
	printf("평균 점수 ==> %5.1f\n", avg[i]);
	printf("\n");
    }

    return 0;
}

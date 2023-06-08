#include <stdio.h>

int main()
{
    char name[10];  //학생 이름, 국어 점수, 영어 점수, 평균 점수 변수를 선언함
    int kor;
    int eng;
    float avg;

    printf("이름 : ");
    scanf("%s", name);   //학생 이름을 입력함. 최대 9자를 입력할 수 있음

    printf("국어 점수 : ");
    scanf("%d", &kor);	//국어 점수를 입력함

    printf("영어 점수 : ");
    scanf("%d", &eng);	//영어 점수를 입력함

    avg = (kor + eng) / 2.0f;	//평균 점수를 계산함

    printf("\n");
    printf("학생 이름 ==> %s\n", name);
    printf("국어 점수 ==> %d\n", kor);
    printf("영어 점수 ==> %d\n", eng);
    printf("평균 점수 ==> %5.1f\n", avg);

    return 0;
}

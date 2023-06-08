#include <stdio.h>
#include <malloc.h>

struct student
{
    char name[10];
    int age;
};

int main()
{
    int inputCount;
    printf("입력할 학생 수 : ");
    scanf("%d", &inputCount);

    struct student *myStudent;

    myStudent = (struct student *) malloc(sizeof(struct student) * inputCount);

    for (int i = 0; i < inputCount; i++)
    {
	printf("이름과 나이 입력 : ");
	scanf("%s %d", (myStudent + i) -> name, &(myStudent + i) -> age);
    }

    printf("\n\n-- 학생 명단 --\n");

    for (int i = 0; i < inputCount; i++)
    {
	printf("이름:%s , 나이:%d \n", (myStudent + i) -> name, (myStudent + i) -> age);
    }

    free(myStudent);

    return 0;
}

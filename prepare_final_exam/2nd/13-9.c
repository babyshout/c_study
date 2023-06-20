#include <stdio.h>
#include <malloc.h>

int main()
{
    struct student { int age; char name[10]; };
    int count;
    printf("입력할 학생 수 : ");
    scanf("%d", &count);
    struct student *myStudent;
    myStudent = (struct student *)malloc(sizeof(struct student) * count);

    for(int i = 0; i < count; i++)
    {
	printf("이름과 나이 입력 : ");
	scanf("%s %d", (myStudent + i)->name
		, &(myStudent + i)->age);
    }
    printf("\n\n-- 학생 명단 --\n");
    for(int i = 0; i < count; i++)
    {
	printf("이름:%s , 나이:%d\n"
		, (myStudent + i)->name, (myStudent + i)->age);
    }

    return 0;
}

#include <stdio.h>
#include <malloc.h>

int main()
{
    struct student {
	char name[10];
	int age;
    };

    struct student *myStudent;
    int i, studentCount;


    printf("입력할 학생 수 : ");
    scanf("%d", &studentCount);

    myStudent = (struct student *) malloc(sizeof(struct student) * studentCount);

    for(i = 0;i < studentCount; i++)
    {
	printf("이름과 나이 입력 : ");
	scanf("%s %d", (myStudent + i)->name, &(myStudent + i)->age);
    }

    for(i = 0;i < studentCount; i++)
    {
	printf("이름 : %s 나이 : %d\n", (myStudent + i)->name, (myStudent + i)->age );
    }

    free(myStudent);

    return 0;
}

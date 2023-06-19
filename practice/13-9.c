#include <stdio.h>
#include <malloc.h>

struct student {
	int age;
	char name[10];
}

int main()
{
	int count;
	printf("입력할 학생 수 : ");
	scanf("%d", &count);

	struct student *myStudent;

	myStudent = (struct student *) malloc(sizeof(struct student) * count);

	for(int i = 0; i < count; i++)
	{
		printf("학생의 이름 , 나이 : ");
		scanf("%s %d", (myStudent + i)->name, &(myStudent + i)->age);
	}

	for(int i = 0; i < count; i++)
	{
		printf("이름 : %s 나이 : %d", (myStudent + i)->name, (myStudent + i)->age);
	}

	return 0;
}
#include <stdio.h>

void gugu(int dan)
{
	for(int i = 1; i < 10; i++)
	{
		printf("%dX%d=%2d",dan, i, dan * i);
	}
}

int main()
{
	int input;
	printf("입력하고 싶은 단 입력 : ");
	scanf("%d", &input);

	gugu(input);

	return 0;
}
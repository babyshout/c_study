#include <stdio.h>

int gugu(int dan);

int main()
{
	int i_want_this_dan;
	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &i_want_this_dan);

	gugu(i_want_this_dan);

	return 0;
}

int gugu(int dan)
{
	for(int i = 1; i < 10; i++)
	{
		printf("%d X  %d= %2d \n", dan, i, dan * i);
	}

	return 0;
}

#include <stdio.h>
#include <malloc.h>

int main()
{
	int count;

	printf("입력할 개수 : ");
	scanf("%d", &count);

	int *p1;

	p1 = (int *) malloc(sizeof(int) * count);

	for(int i = 0; i < count; i++)
	{
		printf("%d 번재 숫자 입력 : ", i + 1);
		scanf("%d", (p + i));
	}

	int sum = 0;

	for(int i = 0; i < count; i++)
	{
		if(*(p + i) % 2)
			sum += *(p + i);
	}

	printf("입력한 짝수 합 : %d", sum);

	return 0;
}
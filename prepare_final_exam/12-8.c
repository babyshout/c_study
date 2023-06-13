#include <stdio.h>
#include <malloc.h>

int main()
{
    int inputCount;

    printf("입력할 개수는 ? ");
    scanf("%d", &inputCount);

    int i;
    int *inputNum;

    inputNum = (int *) malloc(sizeof(int) * inputCount);
    for(i = 0; i < inputCount; i++)
    {
	printf("%d 번째 숫자 : ", i + 1);
	scanf("%d", inputNum + i);
    }

    int sum = 0;

    for(i = 0; i < inputCount; i++)
    {
	if(*(inputNum + i) % 2 == 0)
	    sum += *(inputNum + i);
    }

    printf("입력한 짝수합 ==> %d\n", sum);

    return 0;
}

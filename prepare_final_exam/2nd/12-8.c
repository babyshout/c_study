#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p, count;
    printf("입력할 개수는 ? ");
    scanf("%d",&count);

    p = (int *) malloc(sizeof(int) * count);

    for (int i = 0; i < count; i++) {
	printf("%d 번재 숫자 : ", i +1);
	scanf("%d", (p + i));
    }
    int sum = 0;
    for(int i = 0; i < count; i ++) {
	if(*(p + i) % 2 == 0)
	    sum += *(p + i);
    }

    printf("입력한 짝수합 ==> %d\n", sum);

    return 0;
}

#include <stdio.h>

void gugu(int input);

int main()
{
    int input;
    printf("출력하고 싶은 단을 입력 : ");
    scanf("%d", &input);

    gugu(input);
    
    return 0;
}

void gugu(int input)
{
    for(int i = 0; i < 9; i++)
    {
	printf("%d X %d= %2d\n", input, i+1, input * (i+1) );
    }
    return;
}

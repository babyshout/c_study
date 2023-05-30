#include <stdio.h>
#include <malloc.h> //메모리 관련 함수를 사용할때 malloc.h를 추가함

int main()
{
    int *p; //정수형 포인터를 선언함
    int i, hap = 0;
    int cnt;

    printf("입력할 개수는 ? ");
    scanf("%d", &cnt);	//입력할 숫자의 개수를 입력함

    p = (int *) malloc(sizeof(int) * cnt);  //입력한 개수만큼 메모리를 확보함

    for (i = 0; i < cnt; i++)
    {
	printf("%d 번째 숫자 : ", i + 1);
	scanf("%d", p + i); //공간이 확보된 포인터 변수 p에 입력받은 숫자를 입력함. 배열처럼 &p[i]로 입력해도 됨
    }

    for (i = 0; i < cnt; i++)
	hap = hap + *(p + i);	//메모리의 실제값을 합계에 누적함 배열처럼 p[i]라고 입력해도 됨

    printf("입력 숫자 합 ==> %d\n", hap);

    free(p);	//메모리를 해제함

    return 0;
}

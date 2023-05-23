#include <stdio.h>

int main()
{
    FILE *wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("../data6.txt", "w");

    for (i = 0; i < 5; i++)
    {
	//5회 반복하면서 키보드에서 입력받은 숫자의 합계를 누적함
	printf("숫자 %d : ", i + 1);
	scanf("%d", &in);
	hap += in;
    }

    fprintf(wfp, "합계 ==> : %d\n", hap);  //합계를 파일에 씀

    fclose(wfp);

    return 0;
}

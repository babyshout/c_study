#include <stdio.h>

int main()
{
    FILE *rfp;
    int hap = 0;
    int in, i;

    rfp = fopen("../data2.txt", "r");

    for (i = 0; i < 5; i++)
    {
	fscanf(rfp, "%d", &in);
	hap += in;
	//5회 반복하면서 파일 포인터에서 정수를 읽어오고 합계를 누적함
    }

    printf("합계 ==> %d\n", hap);

    fclose(rfp);

    return 0;
}

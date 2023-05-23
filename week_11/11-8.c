#include <stdio.h>

int main()
{
    char str[200];
    FILE *rfp;
    FILE *wfp;

    rfp = fopen("/etc/group", "r");
    wfp = fopen("../data5.txt", "w");

    for ( ;; )
    {
	//일기용 파일에서 한 줄을 읽음. 최대 199자까지 읽을 수 있음
	fgets (str, 200, rfp);

	//일기용 파일의 끝을 만나 for 문을 빠져 나감
	if(feof(rfp))
	    break;

	fputs(str, wfp);    //쓰기용 파일에 한 줄을 씀
    }

    fclose(rfp);
    fclose(wfp);

    return 0;
}

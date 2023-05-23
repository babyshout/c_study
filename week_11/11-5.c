#include <stdio.h>

int main()
{
    char str[200];
    FILE *rfp;	//파일 포인터를 선언함

    rfp = fopen("/etc/passwd", "r");	//읽어올 파일을 열음

    for(;;) //무한루프
    {
	fgets(str, 200, rfp);	//파일에 한 줄씩 읽어옴

	if(feof(rfp))	//파일에 한줄씩 읽어옴
	    break;

	printf("%s", str);  //파일에서 읽은 내용을 출력함
    }

    fclose(rfp);    //파일을 닫음

    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[200];
    FILE *rfp;

    if (argc != 2)  //매개 변수가 하나가 아니면 메시지를 출력한 후 프로그램을 종료
    {
	printf("\n -- 매개변수를 1개 사용하세요 --\n");
	return 1;
    }

    rfp = fopen(argv[1], "r");	//첫번째 매개변수로 넘어온 것을 읽기 모드로 염

    for( ;; )
    {
	fgets(str, 199, rfp);	//파일의 내용을 한줄 읽어 들임

	if(feof(rfp))	//파일의 끝이면 무한루프를 종료함
	    break;

	printf("%s", str);  //읽을 내용을 출력함
    }

    fclose(rfp);

    return 0;
}

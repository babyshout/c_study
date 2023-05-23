#include <stdio.h>

int main()
{
    char s[20];
    FILE *wfp;

    wfp = fopen("../data3.txt", "w");

    printf("문자열을 입력(최대 19자) : ");
    scanf("%s", s);

    fputs(s, wfp);

    fclose(wfp);

    return 0;
}

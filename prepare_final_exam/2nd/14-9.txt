#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 3) {
	printf("매개변수를 3개 넣어주세요");
	return 2 - argc;
    }

    FILE *wfp, *rfp;

    rfp = fopen(argv[1], "r");
    wfp = fopen(argv[2], "w");

    char str[200];

    while (1)
    {
	fgets(str, 200, rfp);

	if(feof(rfp)) break;
	fputs(str, wfp);
    }

    fclose(wfp);
    fclose(rfp);

    return 0;
}

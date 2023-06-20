#include <stdio.h>

int main()
{
    int i, j;
    FILE *wfp;
    wfp = fopen("gugu.txt", "w");

    for(i = 2; i < 10; i++){
	fprintf(wfp, "#제%d단#\t", i);
    }

    fprintf(wfp, "\n\n");

    for(i = 1; i < 10; i++) {
	for(j = 2; j < 10; j++) {
	    fprintf(wfp, "%dX %d=%2d\t", j, i, j * i);
	}
	fprintf(wfp, "\n");
    }
    return 0;
}

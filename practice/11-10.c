#include <stdio.h>

int main()
{
	FILE *wfp;

	wfp = fopen("gugu.txt", "w");

	for(int i = 2; i < 10; i++)
		fprintf("#제%d단#\t", i);

	for(int i = 1; i < 10; i++){
		for(int j = 2; j < 10; j++){
			fprintf(wfp, "%dX%d=%d\t", j, i, j * i);
		}
		fprintf(wfp,"\n");
	}

	return 0;
}
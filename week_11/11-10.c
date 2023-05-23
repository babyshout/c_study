#include <stdio.h>

int main()
{
    FILE *wfp;

    wfp = fopen("gugu.txt", "w");

    int i;
    
    for (i = 2; i < 10; i++)
    {
	fprintf(wfp,"#제%d단# ", i);
    }


    for (i = 1; i < 10; i++)
    {
	fprintf(wfp, "\n");
	for (int j = 2; j < 10; j++)
	{
	    fprintf(wfp, "%dX %d=%2d ", j, i, j * i);
	}
    }

    fprintf(wfp, "\n");

    fclose(wfp);

    return 0;
}

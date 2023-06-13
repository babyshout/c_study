#include <stdio.h>

int main()
{
    FILE *wfp;
    int i, j;

    wfp = fopen("gugu.txt", "w");

    for(i = 1; i < 9; i++)
    {
	fprintf(wfp, "#제%d단# ", i + 1);
    }
    fprintf(wfp, "\n");

    for(i = 0; i < 9; i++)
    {
	for(j = 1; j < 9; j++)
	{
	    fprintf(wfp, "%dX%2d=%2d ", j + 1, i + 1, (j + 1) * (i + 1) );
	}
	fprintf(wfp, "\n");
    }

    return 0;
}

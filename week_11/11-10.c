#include <stdio.h>

int main()
{
	FILE *wfp;

	wfp = fopen("gugu.txt", "w");

	int i, j;

	for (i = 2; i < 10; i++)
	{
		fprintf(wfp, "#Á¦%d´Ü# ", i);
	}

	for (i = 1; i < 10; i++)
	{
		fprintf(wfp, "\n");
		for (j = 2; j < 10; j++)
		{
			fprintf(wfp, "%dX %d=%2d ", j, i, j * i);
		}
	}

	fprintf(wfp, "\n");

	fclose(wfp);

	return 0;
}

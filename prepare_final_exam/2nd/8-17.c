#include <stdio.h>

int main()
{
    int gugu[9][9];
    int i, j;

    for(i = 0; i < 9; i++)
    {
	for(j = 0; j < 9; j++)
	{
	    gugu[j][i] = (j + 2) * (i + 1);
	}
    }

    for(i = 0; i < 9; i++)
    {
	for(j = 0; j < 8; j++)
	{
	    printf("%dX%d=%2d\t",j+2, i+1, gugu[j][i]);
	}
	printf("\n");

    }
    return 0;
}

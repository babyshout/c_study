#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		return 2 - argc;
	}

	FILE *rfp, *wfp;

	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2], "w");

	char str[200];

	for ( ; ; )
	{
		fgets(str, 199, rfp);

		if(feof(rfp))
			break;

		fputs(str, wfp);
	}


	return 0;
}
#include <string.h>
#include <stdio.h>

int main()
{
	char ss[] = "XYZ";
	char tt[] = "xyz";
	int r;

	r = strcmp(ss, tt);

	printf("두 문자열의 비교결과 ==> %d \n", r);

	return 0;
}

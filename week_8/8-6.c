#include <stdio.h>

int main() {

	int aa[] = {10, 20, 30, 40, 50};
	int count;

	count = sizeof(aa) / sizeof(int);	//4배열 크기를 계산함
	
	printf("배열 aa[]의 요소의 개수는 %d 입니다. \n", count);

	return 0;

}

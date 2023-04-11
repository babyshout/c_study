#include <stdio.h>

void main() {

	int input;
	printf("년도를 입력하세요. : ");
	scanf("%d", &input);

	if(input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
		printf("%d 년은 윤년입니다. \n", input);
	else
		printf("%d 년은 윤년이 아닙니다. \n", input);

}

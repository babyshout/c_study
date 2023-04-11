#include <stdio.h>

void main()
{
	//%d, %x, %o => 10, 16, 8

	int select;
	int input;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d", &select);

	printf("값 입력 : ");

	switch(select){

		case 1 :
			scanf("%d", &input);
			break;
		case 2 :
			scanf("%x", &input);
			break;
		case 3 :
			scanf("%o", &input);
			break;
	
		default : break;

	}

	printf("10진수 ==> %d \n", input);
	printf("16진수 ==> %X \n", input);
	printf("8진수 ==> %o \n", input);

}

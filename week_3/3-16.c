#include <stdio.h>

void main()
{
	//%d, %x, %o => 10, 16, 8

	int select;
	int input;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d", &select);

	printf("�� �Է� : ");

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

	printf("10���� ==> %d \n", input);
	printf("16���� ==> %X \n", input);
	printf("8���� ==> %o \n", input);

}

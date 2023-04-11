#include <stdio.h>

void main()
{
	int input1, input2;
	char ch;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &input1, &ch, &input2);

	switch(ch)
	{
		case '+' :
			printf("%d %c %d = %d 입니다. \n", input1, ch, input2, input1 + input2);
		break;

		case '-' :
			printf("%d %c %d = %d 입니다. \n", input1, ch, input2, input1 - input2);
		break;
		case '*' :
			printf("%d %c %d = %d 입니다. \n", input1, ch, input2, input1 * input2);
		break;
		case '/' :
			printf("%d %c %d = %f 입니다. \n", input1, ch, input2, input1 / (float)input2);
		break;
		case '%' :
			printf("%d %c %d = %d 입니다. \n", input1, ch, input2, input1 % input2);
		break;
		default :
			printf("연산자를 잘못 입력했습니다. \n");
			break;
	}
}

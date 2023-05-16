#include <stdio.h>

int coffee_machine(int button)	//커피 자판기 함수를 구현
{

    printf("\n# 1. 뜨거운 물을 준비한다 \n");
    printf("# 2. 종이컵을 준비한다 \n");

    switch (button) //선택한 버튼에 따라 안내문을 출력함
    {
	case 1 : printf("# 3. 보통커피를 탄다 \n"); break;
	case 2 : printf("# 3. 설탕커피를 탄다 \n"); break;
	case 3 : printf("# 3. 블랙커피를 탄다 \n"); break;
	default : printf("# 3. 아무거나 탄다 \n");
    }

    printf("# 4. 물을 붓는다 \n");
    printf("# 5. 스푼으로 저어서 녹인다 \n\n");

    return 0;	//각각 호출한 곳으로 돌아감 (29행, 34행, 39행) 
}

int main()
{
    int coffee;
    int ret;

    printf("A님 어떤커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
    scanf("%d", &coffee);
    ret = coffee_machine(coffee);   //주문을 받고 자판기의 버튼을 누름(함수를 호출함)
    printf("A님 커피 여기 있습니다 \n\n");

    printf("B님 어떤커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
    scanf("%d", &coffee);
    ret = coffee_machine(coffee);   //주문을 받고 자판기의 버튼을 누름(함수를 호출함)
    printf("B님 커피 여기 있습니다 \n\n");

    printf("C님 어떤커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
    scanf("%d", &coffee);
    ret = coffee_machine(coffee);   //주문을 받고 자판기의 버튼을 누름(함수를 호출함)
    printf("C님 커피 여기 있습니다 \n\n");

    return 0;
}

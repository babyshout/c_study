#include <stdio.h>

int main() {

	//순서대로 시작값, 끝값, 배수
	int inputStart, inputEnd, inputMultipleNumber;

	//시작값 입력
	printf("합계의 시작값 ==> ");
	scanf("%d", &inputStart);

	//끝값 입력
	printf("합계의 끝값 ==> ");
	scanf("%d", &inputEnd);

	//어떤 배수를 찾을건지 입력
	printf("배수 ==> ");
	scanf("%d", &inputMultipleNumber);

	//while문에서 쓸 flag 선언
	int flag = 1;
	//총 합계를 저장할 sum
	int sum = 0;
	//inputMultipleNumber의 배수를 저장할 multipleNumber
	int multipleNumber = 0;

	while(flag) {

		//배수가 inputStart보다 크면 sum에 저장
		if(multipleNumber >= inputStart)
			sum += multipleNumber;

		//계속 inputMultipleNumber의 배수를 구함
		multipleNumber += inputMultipleNumber;

		//배수가 inputEnd보다 크면 flag를 바꿔서 탈출
		if(multipleNumber > inputEnd)
			flag = !flag;	//break;

		//코드 확인을 위해 넣음
		// printf("sum = %d, multipleNumber = %d \n", sum, multipleNumber);


	}

	//정리
	printf("%d부터 %d까지의 %d배수의 합계 ==> %d \n", inputStart, inputEnd, inputMultipleNumber, sum);

	//정상 종료
	return 0;

}

#include <stdio.h>

int main() {

	int a = 100;

	while(a == 200) {
		printf("while 문 내부에 들어 왔습니다. \n");
	}

	do {
		printf("do ~ while 문 내부에 들어 왔습니다. \n");
	} while(a == 200);

	return 0;

}

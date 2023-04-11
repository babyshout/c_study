#include <stdio.h>

int main() {

	printf("#제2단# #제3단# #제4단# #제5단# #제6단# #제7단# #제8단# #제9단# \n\n");

	for(int i = 1; i < 10; i++) {

		for(int j = 2; j < 10; j++) {
			printf("%dX%d =%2d ", j, i, j * i);
		}
		printf("\n");
	}

	printf("\n");


	return 0;

}

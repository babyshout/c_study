#include <stdio.h>

struct s {

	int num;

};

int main() {

	int a, b, c;

	int *aP, *bP, *cP;

	aP = &a;
	bP = &b;
	cP = &c;

	scanf("%d%d%d", aP, bP, cP);

	printf("%d, %d, %d \n", a, b, c);

	printf("%p, %p, %p  \n", &a, &b, &c);
	printf("%p, %p, %p  \n", aP, bP, cP);

	return 1;
}

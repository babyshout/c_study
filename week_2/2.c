#include <stdio.h>

int change_int_a(int *a)
{
	*a=10;
	

	return 111;
}


int main()
{
	int a=0;
	int b=0;
	int c=0;

	scanf("%d",&a);
	printf("a��%d\n",a);
	printf("%d\n",&a);

	int* a_pointer=&a;


	printf("a_pointer%d\n",a_pointer);

	printf("*a_pointer%d\n", *a_pointer);
	int a_f;
	a_f = change_int_a(a_pointer);
	printf("a_f  a   %d   %d",a_f, a);
	return 0;
}

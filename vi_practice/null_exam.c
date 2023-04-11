#include <stdio.h>

int main()
{
	int *n_null = NULL;
	//int n_null_pointer = &n_null;

	char c_nul = '\n';
	char *c_nul_pointer = &c_nul;

	printf("n_null  %d\n", n_null);
	printf("*n_null %d\n", *n_null);
	printf("&n_null %d\n", &n_null);
	
	printf("c_nul %c\n", c_nul);
	printf("c_nul_pointer %c\n", c_nul);
	printf("&c_nul %d\n", &c_nul);


	return 0;
}

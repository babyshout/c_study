#include <stdio.h>

int main()
{
	int a, b;

	while (1)
	{
		printf ("더할 두 수 입력 (멈추려면 0을 입력) : ");
		scanf("%d %d", &a, &b);

		if ( a == 0 )
			break;

		printf("%d + %d = %d \n", a, b, a+b);
	}



	return 0;
}

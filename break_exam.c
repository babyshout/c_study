#include <stdio.h>

int main()
{
	int a, b;

	while (1)
	{
		printf ("���� �� �� �Է� (���߷��� 0�� �Է�) : ");
		scanf("%d %d", &a, &b);

		if ( a == 0 )
			break;

		printf("%d + %d = %d \n", a, b, a+b);
	}



	return 0;
}

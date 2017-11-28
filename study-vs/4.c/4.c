#include <stdio.h>
#include <malloc.h>

void main()
{
	int N, *a , sum = 0  ;
	scanf("%d", &N);

	a = (int*)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < N; i++)
	{
		if (a[i] > a[i - 1])
			sum = sum + 1 ;
	}
			printf("%d\n", sum );
	
	free(a);
	system("pause");
}
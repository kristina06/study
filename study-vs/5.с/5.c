#include <stdio.h>
#include <malloc.h>

void main()
{
	int N, *a;
	scanf("%d", &N);

	a = (int*)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {

		if (a[i] >= 0)
			printf("YES");
		else if (a[i]<0)
			printf("NO");
	}
		free(a);
		system("pause");
}
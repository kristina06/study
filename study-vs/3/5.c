
#include <stdio.h>
#include <stdlib.h>

void main()
{

	int k, n, *a;
	k = 0;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++)
		if ((a[i] > 0) && (a[i + 1] > 0) || (a[i] < 0) && (a[i + 1] < 0)) k = 1;



	if (k == 1)
		printf("YES");

	else  if (k == 0)
		printf("NO");

	free(a);
	return 0;
}

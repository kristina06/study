#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x > 0) {
		x = 1;
	}
	else if (x < 0) {
		x = -1;
	}
	else {
		x = 0;
	}
	printf("%d", x);
	return 0
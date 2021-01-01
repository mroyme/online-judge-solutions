#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d",&a, &b);
	int n = 0;
	while (a <= b) {
		a *= 3;
		b *= 2;
		n++;
	}
	printf("%d", n);
}

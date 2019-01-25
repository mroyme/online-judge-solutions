/**
 * Problem:     SALARY
 * Author:      Madhurjya Roy
 * Link:        https://www.codechef.com/problems/SALARY
 * Environment: C (Gcc 6.3)
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int min = INT_MAX, sum = 0, i;
		for (i = 0; i < n; i++) {
			int tmp;
			scanf("%d", &tmp);
			sum += tmp;
			if (tmp < min) {
				min = tmp;
			}
		}
		printf("%d\n", sum - n * min);
	}
}
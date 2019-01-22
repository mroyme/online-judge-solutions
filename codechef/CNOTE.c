/**
 * Problem:     CNOTE
 * Author:      Madhurjya Roy
 * Link:        https://www.codechef.com/problems/CNOTE
 * Environment: C++14 (Gcc 6.3)
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		unsigned int x, y, k, n;
		scanf("%u %u %u %u", &x, &y, &k, &n);
		unsigned int remaining = x - y;
		bool lucky = false;
		unsigned int i;
		for (i = 0; i < n; i++) {
			unsigned int p, c;
			scanf("%u %u", &p, &c);
			if (p >= remaining && c <= k) {
				lucky = true;
			}
		}
		printf(lucky ? "LuckyChef\n" : "UnluckyChef\n");
	}
}
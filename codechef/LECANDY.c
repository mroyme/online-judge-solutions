/**
 * Problem:     LECANDY
 * Author:      Madhurjya Roy
 * Link:        https://www.codechef.com/problems/LECANDY
 * Environment: C++14 (Gcc 6.3)
 */

#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		unsigned int n;
		long c;
		scanf("%u %li", &n, &c);
		unsigned int i;
		for (i = 0; i < n; i++) {
			unsigned int tmp;
			scanf("%u", &tmp);
			c -= tmp;
		}
		printf(c < 0 ? "No\n" : "Yes\n");
	}
}
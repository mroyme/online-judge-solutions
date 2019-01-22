/**
 * Problem:     LECANDY
 * Author:      Madhurjya Roy
 * Link:        https://www.codechef.com/problems/LECANDY
 * Environment: C++14 (Gcc 6.3)
 */

#include <stdio.h>

int main(void)
{
	unsigned short t;
	scanf("%hu", &t);
	while (t--) {
		unsigned short n;
		long c;
		scanf("%hu %li", &n, &c);
		int i;
		for (i = 0; i < n; i++) {
			int tmp;
			scanf("%d", &tmp);
			c -= tmp;
		}
		printf(c < 0 ? "No\n" : "Yes\n");
	}
}
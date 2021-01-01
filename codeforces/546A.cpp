#include <iostream>

int main()
{
	int k, n, w;
	std::cin >> k >> n >> w;
	int b = (k * w * (w + 1)) / 2 - n;
	std::cout << (b > 0 ? b : 0);
}

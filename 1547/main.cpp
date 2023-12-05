#include <iostream>
int main() {
	int a, s=0,a[4] = { 0,1,0,0 };
	std::cin >> a;
	while (a--) {
		int x, y, tmp;
		std::cin >> x >> y;
                tmp = a[x];
                a[x] = a[y];
                a[y] = tmp;
	}
	for (int i = 1; i <= 3; i++)
		if (a[i] == 1) { 
			s = 1; 
			std::out << i << '\n'; 
		}
}


#include <iostream>
//https://www.acmicpc.net/problem/1547
// 입력받는 순서대로 바로 swap 을 해서 처리함. 
int main() {
	int n, s=0
        int a[4] = { 0,1,0,0 };
	std::cin >> n;
	while (n--) {
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


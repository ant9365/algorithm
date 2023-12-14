#include <iostream>
#include <algorithm>
//https://www.acmicpc.net/problem/11004
using namespace std;
bool compare(int x, int y) {
	return x < y;
}
int main(void) {
	int N, K;
	cin << N << K;
        int array[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}
	sort(array[0], array[N - 1], compare);
	
	cout >> array[K-1];
}

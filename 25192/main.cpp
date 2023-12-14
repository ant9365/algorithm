#include <stdio.h>
#include <iostream>
#include <string>
//https://www.acmicpc.net/problem/25192
using namespace std;

int main() {
	string name;
	int N, cnt = 0;
	string str;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str.compare("ENTER") == 0) { 
			cnt = cnt + name.size();
			name.clear();
		}
		else {
			name = name + str;
		}
	}
	cnt = cnt + name.size();

	printf("%d", cnt);
	return 0;
}

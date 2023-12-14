#include <iostream>
#include <string>
//https://www.acmicpc.net/problem/3136
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = n;
	string input;
	while (1) {
		if(n <= 0 )
			break;
		int alpha[26] = { 0,};
		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			int idx = input[i] - 'a';
			if (alpha[idx] == 0) 			
				alpha[idx] = 1;
			else if(input.at(i) != input.at(i - 1)) {
				cnt = cnt - 1;
				break;
			}

		}
		n--;
	}
	cout << cnt;
}

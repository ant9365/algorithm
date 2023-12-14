#include <iostream>
//https://www.acmicpc.net/problem/14501
using namespace std;

int a[20], b[20];
int result =0;
void get(int now, int sum){

	if(now == n + 1){
		result = max(sum, result);
		return;
	}
	get(now + 1, sum);
	if(now + a[now] <= n + 1){
		get(now + a[now],sum + b[now]);
	}
}
int main(){
	int n;
	cin >> &n;
	for(int i = 1; i <= n; i++){
		cin >> &a[i] >> &b[i];
	}
	get(1, 0);
	cout << result << endl;
}

#include <stdio.h>
//https://www.acmicpc.net/problem/2562
int main() 
{
	int input[9];
	int max = 0;
	int tmp = 0;
// input 받고
	for(int i = 0; i < 9; i++) {
		scanf("%d", &input[i]);

	}
	int max= -1;	
	int idx;	
// 돌면서 max 값 찾음. 
	for (int i = 0; i < 9; i++) {
		if (num[i] > max) {
			max= num[i];
			idx= i;
		}
	}
}

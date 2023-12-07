#include <stdio.h>

void main() {
//        입력을 하면 1
//       배열에 입력해 놓으면 체크안한 indx 가 제출안한 case
        int arr[30] = { 0, };		
	for (int i = 0; i < 28; i++) {	
		int n;
		scanf("%d", &n);
		arr[n - 1] = 1;
	}
	for (int i = 0; i < 30; i++)	
		if (arr[i] == 0)
			printf("%d\n", i + 1);
}

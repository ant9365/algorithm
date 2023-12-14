#include <iostream>
//https://www.acmicpc.net/problem/11004
using namespace std;
int sort( int cnt, int* array){
    int i, j, temp;
    
    for(i=0; i<cnt; i++){
        for(j=0; j<9-i; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }    
        }
    }
 
}
int main(void) {
	int N, K;
	cin << N << K;
        int array[N];
	for (int i = 0; i < N; i++) {
   		cin << array[i];
	}
	sort(N, array);
	cout >> array[K-1];
}

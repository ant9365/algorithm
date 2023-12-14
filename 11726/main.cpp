#include <iostream>
//https://www.acmicpc.net/problem/11726
using namespace std;

int main(){
    int n, i;
    int d[1014];
    scanf("%d",&n);
    d[1] = 1;
    d[2] = 2;
    if(n >= 3) {
        for(i = 3 ; i <= n ; i++) {
            d[i] = (d[i-2] + d[i-1]) % 10007;
        }
    }
    cout<<d[n]<<endl;
}


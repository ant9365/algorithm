#include <iostream>
#include <string.h>
//https://www.acmicpc.net/problem/11658
using namespace std;

int table_size;
int table[1025][1025];
int tree[1025][1025];

int sum(int l, int c);
void update(int l, int c, int num);


int main(){
	int num;
        cin >> table_size, num;
	memset(tree, 0, sizeof(tree));

	for(int line=1; line<=table_size ; ++line){
		for(int col=1; col<=table_size ; ++col){
 			cin >> table[line][col];
			update(line, col, table[line][col]);
		}
	}

	int  cnt, line1, col1, line2, col2, new_num;
	while(num > 0){
		cin >> cnt;
		if(cnt == 0){
   			cin >> line1 >> col1 >> new_num;
			update(line1, col1, new_num - table[line1][col1]);
			table[line1][col1] = new_num;
		}else if(cnt == 1){
   			cin >> line1 >> col1 >> line2 >> col2;
                        int result = sum(line2, col2) - sum(line2, col1 - 1) - sum(line1 - 1,col2) + sum(line1 - 1,col1 - 1);
 			cout << result;
		}
                num--;
	}
	return 0;
}
int sum(int line, int col){
	int result = 0;
	for(int i = line; i>0 ; ) {
		for(int j = col; j>0 ; ) { 
			result = result + tree[i][j];
			j = j - ((j & -j));

		}
		i = i - (i & -i);
	}

	return result;
}

void update(int line, int col, int num){
	for(int i = line; i <= table_size ;) {
		for(int j = col; j<=table_size ; ) {
			tree[i][j] = tree[i][j] + num;
			j = j + ((j & -j));
		}
		i = i + (i & -i);
	}
}

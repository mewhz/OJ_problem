//https://www.luogu.com.cn/problem/P1014
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	int x = 1, y = 1;
	for (int i = 2; i <= n; i++){
		if ((x + y ) % 2 == 0){
			if (x == 1)	y++;
			else	x--,y++; 
		}
		else{
			if (y == 1)	x++;
			else	x++,y--;
		}
	}
	printf("%d/%d", x, y);
	return 0;
} 

//http://182.92.86.249/problem.php?pid=1067
#include<bits/stdc++.h>
using namespace std;
char a[55][55];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%c",&a[i][j]);			
		}
		getchar();
	}
	int max = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int s = 0;
			if(a[i][j]=='.'){
				int x = i;
				int y = j;
				while(1){
					x++;
					if(a[x][y]=='G'){
						s++;
					}
					if(a[x][y]=='#'){
						break;
					}
				}
				x = i;
				y = j;
				while(1){
					x--;
					if(a[x][y]=='G'){
						s++;
					}
					if(a[x][y]=='#'){
						break;
					}
				}
				x = i;
				y = j;
				while(1){
					y++;
					if(a[x][y]=='G'){
						s++;
					}
					if(a[x][y]=='#'){
						break;
					}
				}
				x = i;
				y = j;
				while(1){
					y--;
					if(a[x][y]=='G'){
						s++;
					}
					if(a[x][y]=='#'){
						break;
					}
				}
			}
			if(max<s){
				max = s;
			}
		}
	}
	printf("%d",max);
	return 0;
}

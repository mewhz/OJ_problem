//http://123.57.166.69/problem.php?pid=1070
#include<bits/stdc++.h>
using namespace std;
int h[105][105];
int book[105][105];
int N[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
typedef struct A{
	int x;
	int y;
	int step;
}Queue;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&h[i][j]);
		}
	}
	Queue Q[10005];
	int startx,starty,q,p;
	scanf("%d%d%d%d",&startx,&starty,&q,&p);
	int head = 1;
	int tail = 1;
	Q[tail].x = startx;
	Q[tail].y = starty;
	Q[tail].step = 0;
	tail++;
	book[startx][starty] = 1;
	int flag = 0;
	while(head<tail){
		for(int i=0;i<4;i++){
			int tx = Q[head].x+N[i][0];
			int ty = Q[head].y+N[i][1];
			if(tx<1||tx>n||ty<1||ty>m)
				continue;
			if(h[tx][ty] == 0 && book[tx][ty] == 0){
				book[tx][ty] = 1;
				Q[tail].x = tx;
				Q[tail].y = ty;
				Q[tail].step = Q[head].step+1;
				tail++;
			}
			if(tx==q&&ty==p){
				flag = 1;
				break;
			}
		}
		if(flag==1){
			break;
		}
		head++;
	}
	if(flag==1){
		printf("%d",Q[tail-1].step);
	}
	else{
		printf("No Way!");
	}
	return 0;
}

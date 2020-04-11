//https://ac.nowcoder.com/acm/contest/5026/A
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int am,ak,bm,bk;
		int n = 0;
		scanf("%d%d%d%d",&am,&ak,&bm,&bk);
		if(bk<=0||ak>=bm){
			printf("-1\n");
		}
		else{
			int tm = bm;
			while(am>0){
				tm-=ak;
				if(tm<=0){
					tm = bm;
					n++;
				}
				else{
					am-=bk;
				}
			}
			printf("%d\n",n);
		}
	}
	return 0;
}

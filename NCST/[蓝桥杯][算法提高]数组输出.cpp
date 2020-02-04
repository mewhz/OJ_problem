//http://182.92.86.249/problem.php?pid=1215
#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int num;
	int row;//ÐÐ 
	int col;//ÁÐ 
}Edu;
bool cmp(Edu a,Edu b){
	if(a.num!=b.num){
		return a.num>b.num;
	}
	else	if(a.row!=b.row){
		return a.row<b.row;
	}
	else	if(a.col!=b.col){
		return a.row<b.row;
	}
}
int main(){
	Edu a[20];
	int k = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[k].num);
			a[k].row = i+1;
			a[k].col = j+1;
			k++;
		}
	}
	sort(a,a+12,cmp);
	cout<<a[0].num<<" "<<a[0].row<<" "<<a[0].col;
	return 0;
}

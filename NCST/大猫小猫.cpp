//http://182.92.86.249/problem.php?pid=1371
#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int bigcat;
	int smallcat;
}Cat;
int main(){
	Cat cat[85];
	cat[1].bigcat = 1;
	cat[1].smallcat = 0;
	for(int i=2;i<=4;i++){
		cat[i].bigcat = 1;
		cat[i].smallcat = cat[i-1].smallcat+1;
	}
	for(int i = 5;i<81;i++){
		cat[i].bigcat = cat[i-3].bigcat+cat[i-1].bigcat;
		cat[i].smallcat = cat[i-1].smallcat-cat[i-3].bigcat+cat[i].bigcat;
	}
	int a;
	while(cin>>a&&a){
		cout<<cat[a].bigcat+cat[a].smallcat<<endl;
	}
	return 0;
}

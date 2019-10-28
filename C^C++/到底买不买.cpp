//https://pintia.cn/problem-sets/994805260223102976/problems/994805283241443328
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int c[300] = {0};
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		c[a[i]]++;
	}
	int num = 0;
	for(int i=0;i<b.length();i++){
		if(c[b[i]]>0){
			c[b[i]]--;
		}
		else{
			num++;
		}
	}
	if(num==0){
		printf("Yes %d",a.length()-b.length());
	}
	else{
		printf("No %d",num);
	}
	return 0;
}

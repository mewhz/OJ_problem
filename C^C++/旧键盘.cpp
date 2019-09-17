//https://pintia.cn/problem-sets/994805260223102976/problems/994805292322111488
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100],b[100],c[100];
	int t = 0;
	int v[300]={0};
	scanf("%s",a);
	scanf("%s",b);
	for(int i=0,j=0;i<strlen(a);i++,j++){
		if(a[i] == b[j])
			continue;
		else{
			if(a[i]<='z'&&a[i]>='a')
				c[t] = a[i]-('a'-'A');
			else	
				c[t] = a[i];
			v[c[t]] = 1;
			j--;
			t++;
		}
	}
	for(int i=0;i<t;i++){
		if(v[c[i]]==1){
			cout<<c[i];
			v[c[i]]=0;
		}
	}
	return 0;
}

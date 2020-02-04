//http://182.92.86.249/problem.php?pid=1202
#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],c[10],n;
set<int> se;
void dfs(int length){
	if(length==n){//µ½´ï±ß½ç
		int num = 0;
		for(int j=0;j<n;j++){
			num+=c[j];
			num*=10;	
		}
		num/=10;
		se.insert(num);
		return;
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]>0){
			b[a[i]]--;
			c[length] = a[i];
			dfs(length+1);
			b[a[i]]++;	
		}
	}
	return;
}
int main(){
	char s[10];
	scanf("%s",s);
	n = strlen(s);
	for(int i=0;i<n;i++){
		a[i] = s[i]-'0';
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	dfs(0);
	for(auto i = se.begin();i!=se.end();i++){
		printf("%d\n",*i); 
	}
	return 0;
}

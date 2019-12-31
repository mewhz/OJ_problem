//https://pintia.cn/problem-sets/994805260223102976/problems/1071785884776722432
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int a[256]={0};
	getline(cin,s1);
	getline(cin,s2);
	string s = s1+s2;
	for(int i=0;i<s.size();i++){
		if(a[s[i]]==0)
			cout<<s[i];
		a[s[i]]=1;
	}
	return 0;
}

//https://pintia.cn/problem-sets/994805046380707840/problems/1111914599412858880
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0; i<n; i++) {
		string s;
		string k[100];
		int l = 0;
		int L = 0;
		int flag = 0;
		getline(cin,s);
		for(int j=0; j<s.length(); j++) {
			if(s[j]==' ') {
				l++;
				continue;
			}
			if(s[j]==',') {
				L = l;
				if(s[j-1]=='g'&&s[j-2]=='n'&&s[j-3]=='o') {
					flag++;
				} else {
					break;
				}
			}
			if(s[j]=='.') {
				if(s[j-1]=='g'&&s[j-2]=='n'&&s[j-3]=='o') {
					flag++;
				} else {
					break;
				}
			}
			k[l]+=s[j];
		}
		if(flag==2) {
			for(int j=0; j<=L; j++) {
				cout<<k[j]<<" ";
			}
			for(int j=L+1;j<=l-3;j++){
				cout<<k[j]<<" ";
			}
			cout<<"qiao ben zhong.";
		}
		else{
			cout<<"Skipped";
		}
		if(i!=n-1){
			cout<<endl;
		}
	}
	return 0;
}


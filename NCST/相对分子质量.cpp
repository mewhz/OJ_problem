//http://182.92.86.249/problem.php?pid=1599
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int sum = 0;
		for(int j=0;j<s.length();j++){
			if(s[j]=='C'){
				if(s[j+1]<='9'&&s[j+1]>='1'){
					sum+=12*(s[j+1]-'0');
				}
				else{
					sum+=12;
				}
			}
			if(s[j]=='O'){
				if(s[j+1]<='9'&&s[j+1]>='1'){
					sum+=16*(s[j+1]-'0');
				}
				else{
					sum+=16;
				}
			}
			if(s[j]=='H'){
				if(s[j+1]<='9'&&s[j+1]>='1'){
					sum+=1*(s[j+1]-'0');
				}
				else{
					sum+=1;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
} 

//http://182.92.86.249/problem.php?pid=1326
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	char k;
	cin>>k;
	for(int i=0;i<s.length();i++){
		if(s[i]==k){
			continue;
		}
		else{
			cout<<s[i];
		}
	}
	return 0;
}

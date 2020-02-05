//http://182.92.86.249/problem.php?pid=1204
#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main(){
	int n;
	map<string,int> m;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		m[s]++;
	}
	string s[n];
	int max = 0;
	for(auto it = m.begin();it!=m.end();it++){
		int num = it->second;
		if(num > max){
			max = num;
		}
	}
	int i = 0;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second==max){
			s[i] = it->first;
			i++;
		}
	}
	for(int j=0;j<=i;j++){
		cout<<s[j]<<endl;
	}
	return 0;
}

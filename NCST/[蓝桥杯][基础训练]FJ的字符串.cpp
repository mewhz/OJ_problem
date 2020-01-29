//http://182.92.86.249/problem.php?pid=1098
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s1 = "A";
	for(int i=1;i<n;i++){
		string s2 = s1;
		char a = 'A'+i;
		s1 = s1+a+s2;
	}
	cout<<s1;
	return 0;
} 

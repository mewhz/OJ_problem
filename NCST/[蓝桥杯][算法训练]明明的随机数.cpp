#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	set<int> s;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.insert(a);
	}
	set<int>::iterator it;
	it = s.begin();
	cout<<s.size()<<endl;
	while(it!=s.end()){
		cout<<*it<<" ";
		it++;
	}
	return 0;
}

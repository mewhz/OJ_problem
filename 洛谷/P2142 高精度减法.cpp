//https://www.luogu.com.cn/problem/P2142
#include<bits/stdc++.h>
using namespace std;
bool cmp(string s1,string s2){
	if(s1.size()!=s2.size())	return s1.size()>s2.size();
	for(int i=s1.size()-1;i>=0;i--)
		if(s1[i]!=s2[i])	return s1[i]>s2[i];
	return true;
}
vector<int> sub(vector<int> a,vector<int> b){
	vector<int> c;
	int t = 0;
	for(int i=0;i<a.size();i++){
		t = a[i]-t;
		if(i<b.size())	t-=b[i];
		c.push_back((t+10)%10);
		if(t<0)	t = 1;
		else	t = 0;
	}
	while((c.size()>1)&&(c[c.size()-1]==0))	c.pop_back();
	return c;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	vector<int> a,b,c;
	for(int i=s1.size()-1;i>=0;i--)	a.push_back(s1[i]-'0');	
	for(int i=s2.size()-1;i>=0;i--)	b.push_back(s2[i]-'0');
	if(cmp(s1,s2)){
		c = sub(a,b);
	}
	else{
		printf("-");
		c = sub(b,a);
	}
	for(int i=c.size()-1;i>=0;i--)	printf("%d",c[i]);
	return 0;
} 

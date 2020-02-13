//http://182.92.86.249/problem.php?pid=1450
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct{
	ll x;
	ll y;
}Edu;
bool cmp(Edu a,Edu b){
	if(a.x!=b.x){
		return a.x<b.x;
	}
	else{
		return a.y<b.y;
	}
}
int main(){
	ll n;
	cin>>n;
	Edu s[n];
	for(int i=0;i<n;i++){
		cin>>s[i].x>>s[i].y;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++){
		cout<<s[i].x<<" "<<s[i].y<<endl;
	}
	return 0;
}

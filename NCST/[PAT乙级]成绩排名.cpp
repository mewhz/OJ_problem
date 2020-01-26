//http://182.92.86.249/problem.php?pid=1354
#include<bits/stdc++.h>
using namespace std;
typedef struct {
	char a[100];
	char b[100];
	int num;
}Edu;
bool cmp(Edu x,Edu y){
	return x.num>y.num;
} 
int main(){
	int n;
	cin>>n;
	Edu s[n];
	for(int i=0;i<n;i++){
		cin>>s[i].a>>s[i].b>>s[i].num;
	}
	sort(s,s+n,cmp);
	cout<<s[0].a<<" "<<s[0].b<<endl;
	cout<<s[n-1].a<<" "<<s[n-1].b<<endl;
	return 0;
} 

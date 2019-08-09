//ÌâÄ¿Á´½Ó:"https://www.dotcpp.com/oj/problem1011.html" 
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	int max = gcd(a,b);
	int min = a*b/max;
	cout<<max<<" "<<min;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int day = n/24/60;
	n-=day*24*60;
	int hour = n/60;
	n-=hour*60;
	cout<<day<<" "<<hour<<" "<<n<<endl;
	return 0;
}

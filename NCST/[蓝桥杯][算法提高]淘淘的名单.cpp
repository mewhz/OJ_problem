//http://182.92.86.249/problem.php?pid=1220
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="WYS"){
			cout<<"KXZSMR"<<endl;
		}
		else	if(s=="CQ"){
			cout<<"CHAIQIANG"<<endl;
		}
		else	if(s=="LC"){
			cout<<"DRAGONNET"<<endl;
		}
		else	if(s=="SYT"||s=="SSD"||s=="LSS"||s=="LYF"){
			cout<<"STUDYFATHER"<<endl;
		}
		else{
			cout<<"DENOMINATOR"<<endl;
		}
	}
	return 0;
} 

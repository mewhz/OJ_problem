//http://182.92.86.249/problem.php?pid=1497
#include<bits/stdc++.h>
using namespace std;
string str[105];
int len = 0;
typedef struct{
	int year = 0;
	int month = 0;
	int day = 0;
	int num = 0;
}Edu;
bool cmp(Edu a,Edu b){
	if(a.year!=b.year){
		return a.year<b.year;
	}
	else{
		if(a.month!=b.month){
			return a.month<b.month;
		}
		else{
			return a.day<b.day;
		}
	}
}
int main(){
	map<string,int> ma;
	int n;
	int m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n+m;i++){
		string s;
		cin>>s;
		ma[s]++;
	}
	for(auto it = ma.begin();it!=ma.end();it++){
		if(it->second==2){
			str[len] = it->first;
			len++;
		}
	}
	if(len==1){
		cout<<str[0];
	}
	else{
		Edu x[len+1];
		for(int i=0;i<len;i++){
			for(int j=6;j<10;j++){
				x[i].year +=str[i][j]-'0';
				x[i].year*=10;
			}
			x[i].year/=10;
			for(int j=10;j<12;j++){
				x[i].month+=str[i][j]-'0';
				x[i].month*=10;
			}
			x[i].month/=10;
			for(int j=12;j<14;j++){
				x[i].day+=str[i][j]-'0';
				x[i].day*=10;
			}
			x[i].day/=10;
			x[i].num = i;
		}
		sort(x,x+len,cmp);
		cout<<str[x[0].num];
	}
	return 0;
}

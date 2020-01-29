//http://182.92.86.249/problem.php?pid=1085
#include<bits/stdc++.h>
using namespace std;
int main() {
	int h,m;
	cin>>h>>m;
	string a[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	if(h<=20) {
		cout<<a[h]<<" ";
	} else {
		int k = h/10;
		switch(k) {
			case 2:
				cout<<"twenty ";
				break;
			case 3:
				cout<<"thirty ";
				break;
			case 4:
				cout<<"forty ";
				break;
			case 5:
				cout<<"fifty ";
				break;
		}
		int j = h%10;
		if(j!=0) {
			cout<<a[j]<<" ";
		}
	}
	if(m==0) {
		cout<<"o'clock";
	} else {
		if(m<=20) {
			cout<<a[m]<<" ";
		} else {
			int k = m/10;
			switch(k) {
				case 2:
					cout<<"twenty ";
					break;
				case 3:
					cout<<"thirty ";
					break;
				case 4:
					cout<<"forty ";
					break;
				case 5:
					cout<<"fifty ";
					break;
			}
			int j = m%10;
			if(j!=0) {
				cout<<a[j]<<" ";
			}
		}
	}
}

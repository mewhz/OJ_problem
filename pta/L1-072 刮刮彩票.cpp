//https://pintia.cn/problem-sets/994805046380707840/problems/1336215880692482055
#include <bits/stdc++.h> 
using namespace std;
int arr[3][3];
int main(){	
	int sum = 45;
	for (int i = 0; i < 3; i ++)
		for (int j = 0; j < 3; j ++){
			cin >> arr[i][j];
			sum -= arr[i][j];
		}
	for (int i = 0; i < 3; i ++)
		for (int j = 0; j < 3; j ++){
			if (arr[i][j] == 0)
				arr[i][j] = sum;
		}
	for (int i = 0; i < 3; i ++){
		int a, b;
		cin >> a >> b;
		cout << arr[a - 1][b - 1] << endl;
	}
	sum = 0;
	int c;
	cin >> c;
	switch(c){
		case 1:sum = arr[0][0] + arr[0][1] + arr[0][1]; break;
		case 2:sum = arr[1][0] + arr[1][1] + arr[1][2]; break;
		case 3:sum = arr[2][0] + arr[2][1] + arr[2][2]; break;
		case 4:sum = arr[0][0] + arr[1][0] + arr[2][0]; break;
		case 5:sum = arr[0][1] + arr[1][1] + arr[2][1]; break;
		case 6:sum = arr[0][2] + arr[1][2] + arr[2][2]; break;
		case 7:sum = arr[0][0] + arr[1][1] + arr[2][2]; break;
		case 8:sum = arr[0][2] + arr[1][1] + arr[2][0]; break; 
	}
	switch(sum){
		case 6: cout << "10000";break;
		case 7: cout << "36";break;
		case 8: cout << "720";break;
		case 9: cout << "360";break;
		case 10: cout << "80";break;
		case 11: cout << "252";break;
		case 12: cout << "108";break;
		case 13: cout << "72";break;
		case 14: cout << "54";break;
		case 15: cout << "180";break;
		case 16: cout << "72";break;
		case 17: cout << "180";break;
		case 18: cout << "119";break;
		case 19: cout << "36";break;
		case 20: cout << "306";break;
		case 21: cout << "1080";break;
		case 22: cout << "144";break;
		case 23: cout << "1800";break;
		case 24: cout << "3600";break;
	}
	return 0;
}

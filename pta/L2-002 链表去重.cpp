//https://pintia.cn/problem-sets/994805046380707840/problems/994805072641245184
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
const int M = 1e4 + 100;
int head, n;
bool f[M];
typedef struct {
	int val,nex,ar;
} link;
vector<link> v1(N), v2;
int main() {
	scanf("%d%d", &head, &n);
	for (int i = 0; i < n; i++) {
		int ar;
		scanf("%d", &ar);
		scanf("%d%d", &v1[ar].val, &v1[ar].nex);
		v1[ar].ar = ar;
	}
	int ar = head;
	int lastAr, j = 0;
	while (ar != -1){
		int num = abs(v1[ar].val);
		if (!f[num])	f[num] = 1, lastAr = ar;
		else {
			link temp;
			temp.val = v1[ar].val;
			temp.ar = ar;
			temp.nex = 0;
			v2.push_back(temp);
			if (v2.size() > 1) {
				v2[j].nex = temp.ar;
				j++;
			}
			v1[lastAr].nex = v1[ar].nex;
		}
		ar = v1[ar].nex;
	}
	if (v2.size() != 0)	v2[v2.size() - 1].nex = -1;
	ar = head;
	while (ar != -1) {
		if (v1[ar].nex == -1) {
			printf("%05d %d %d\n", v1[ar].ar, v1[ar].val, v1[ar].nex);
		} else {
			printf("%05d %d %05d\n", v1[ar].ar, v1[ar].val, v1[ar].nex);
		}
		ar = v1[ar].nex;
	}
	for (int i = 0; i < v2.size(); i++) {
		if (v2[i].nex == -1)
			printf("%05d %d %d\n", v2[i].ar, v2[i].val, v2[i].nex);
		else
			printf("%05d %d %05d\n", v2[i].ar, v2[i].val, v2[i].nex);
	}
	return 0;
}

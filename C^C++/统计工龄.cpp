//ÌâÄ¿Á´½Ó:"https://pintia.cn/problem-sets/15/problems/721" 
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
typedef long long ll;
int main()
{
	ll n;
	cin >> n;
	ll a[N + 5];
	set<ll>s;
	memset(a, 0, sizeof(a));
	for (ll i = 0; i < n; i++)
	{
		ll b;
		cin >> b;
		s.insert(b);
		a[b]++;
	}
	set<ll>::iterator t;
	ll l = s.size();
	t=s.begin(); 
	for (ll i=0;i<l;i++)
	{
		cout << *t << ":" << a[*t];
		t++;
		if (i != l - 1)
			cout << endl;
	}
	return 0;
}

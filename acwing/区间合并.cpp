//https://www.acwing.com/activity/content/problem/content/837/
#include <bits/stdc++.h>
using namespace std;
typedef struct{
  int a, b;  
}p;
int n;
vector<p> segs;
bool cmp(p x, p y){
    if (x.a != y.a) return x.a < y.a;
    return x.b < y.b;
}
void fun(vector<p> &segs){
    vector<p> ans;
    sort(segs.begin(), segs.end(), cmp);
    p x;
    x.a = -2e9, x.b = -2e9;
    for (int i = 0; i < n; i++){
        if (x.b < segs[i].a){
            if (x.a != -2e9)    ans.push_back(x);
            x = segs[i];
        }
        else{
            x.b = max(segs[i].b, x.b);
        }
    }
    ans.push_back(x);
    segs = ans;
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        p x;
        cin >> x.a >> x.b;
        segs.push_back(x);
    }
    fun(segs);
    cout << segs.size();
    return 0;
}

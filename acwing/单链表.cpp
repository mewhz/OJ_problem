//https://www.acwing.com/problem/content/828/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int e[N], ne[N], idx = 0, head = -1;
void add_to_head(int x){
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}
void add(int k, int x){
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}
void del(int k){
    ne[k] = ne[ne[k]];
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        char ch;
        cin >> ch;
        if (ch == 'H'){
            int x;
            cin >> x;
            add_to_head(x);
        }
        else    if (ch == 'I'){
            int x, k;
            cin >> k >> x;
            add(k - 1, x);
        }
        else    if (ch == 'D'){
            int k;
            cin >> k;
            if (!k) head = ne[head];
            del(k - 1);
        }
    }
    while(head != -1){
        cout << e[head] << " ";
        head = ne[head];
    }
    return 0;
}

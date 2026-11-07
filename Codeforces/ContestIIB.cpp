#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
void n3(int u){
    v.emplace_back(u);
    if(u%3==0){
        n3(u/3);
        n3((u/3)*2);
    }
}
void solve(){
    v.clear();
    int n,m;
    cin >> n >> m;
    n3(n);
    for(int x : v){
        if(m==x){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}

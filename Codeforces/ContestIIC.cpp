#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,i=0,iteratual = 1;
    vector<int> b;
    cin >> n >> m;
    for(int i=1;i<n;i++){
        cin >> b.emplace_back();
    }
    while(i<=n){
        if(iteratual > m){
            cout << "NO\n";
            return;
        }
        if(iteratual == m){
            cout << "YES\n";
            return;
        }
        iteratual = b[iteratual-1] + iteratual;
    }
    return;
}
int main(){
    solve();
}

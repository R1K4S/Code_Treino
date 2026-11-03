#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve(){
    long long n,m,a,b,sol=0;
    cin >> n >> m;
    vector<int> v(n,0);
    for(int i=1;i<=m;i++){
        cin >> a >> b;
        v[a] = 1;
        v[b] = 1;
    }
    for(int i=1;i<=m;i++){
        if(v[i]==0){
            sol = i;
        }
    }
    for(int x : v){
        cout << x << "\n";
    }
    cout << n-1 << "\n";
    for(int x : v){
        if(x!=sol){
            cout << sol << " " << x <<"\n";
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    solve();
    return 0;
}

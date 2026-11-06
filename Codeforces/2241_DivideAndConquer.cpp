#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int x,y;
    cin >> x >> y;
    if(y > x){
        cout << "NO" << "\n";
        return;
    }
    if (x%y==0) {
        cout << "YES" << "\n";
        return;
    }else {
        cout << "NO" << "\n";
        return;
    }
}
int main(){
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

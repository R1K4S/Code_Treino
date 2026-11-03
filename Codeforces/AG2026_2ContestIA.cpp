#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,p,m;
    cin >> n >> k;
    p = (n*(n-1))/2;
    m = n-1;
    if(m>k){
        cout << n << "\n";
        return;
    }
    cout << 1 << "\n";
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

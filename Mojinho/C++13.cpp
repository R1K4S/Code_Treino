#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    tuple <int,int,int> t;
    cin >> a >> b >> c;
    t = {a,b,c};
    cout << max({a,b,c}) << "\n";
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

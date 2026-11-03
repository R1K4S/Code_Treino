#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int i=1;i<=10;i++){
        cout << n << " x " << i << " = " << n*i << "\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    solve();
    return 0;
}

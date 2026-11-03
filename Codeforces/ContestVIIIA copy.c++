#include <bits/stdc++.h>
using namespace std;
long long MaiorDiv(long long n){
    if(n==1)return 0;
    if(n==2)return 1;
    if(n==3){
        return 2;
    }
    if(n%2==0){
        return 2;
    }
    return 3;
}
void solve(){
    long long n,d,moves=0;
    cin >> n;
    moves = MaiorDiv(n);
    cout << moves << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

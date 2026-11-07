#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool primo(long long n)
{
    long long d;
       if(n <= 1) return 0;
       for (d = 2; d*d <= n; d++) {
         if (n%d == 0)
           return 0;
        }
       return 1;
}
void solve(){
    long long n,m,d;
    cin >> n >> m;
    d = (n+m)*(n-m);
    if(primo(d))cout << "YES" <<"\n";
    else{cout << "NO" <<"\n";}
}
int main(){
    int t;
    cin >> t;
    while (t--) {
    solve();
    }
    return 0;
}

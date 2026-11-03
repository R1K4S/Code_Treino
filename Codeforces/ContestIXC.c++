#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(){
    long long n,cuts;
    cin >> n;
    for (int i =1; i<n; i++) {
        cuts = i*2;
        if(n%cuts){
        cout << cuts << "\n";
        return;
        }
    }
    cout << cuts << "\n";
}
int main(){
        solve();
}

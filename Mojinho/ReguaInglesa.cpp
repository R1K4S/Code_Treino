#include <bits/stdc++.h>
using namespace std;
void regua(int n){
    if(n==0){
        return;
    }
    regua(n-1);
    cout << ".";
    for(int i =0;i<n;i++){
        cout << "-";
    }
    cout<<"\n";
    regua(n-1);
}
void solve(){
    int n;
    cin >> n;
    regua(n);
    return;
}
int main() {
    solve();
    return 0;
}

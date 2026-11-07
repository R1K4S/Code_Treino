#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void solve(){
    long long b,c=0,i;
    cin >> b;
    if(b==1){
        cout << 1 << "\n";
        return;
    }
    for(i = 1;i*i<=b;i++){
        if(b%i==0)c+=2;
        if(i*i==b)c--;
    }
    cout << c << "\n";
}
int main(){
    solve();
    return 0;
}

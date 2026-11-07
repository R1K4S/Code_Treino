#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    d=0;
    cin >> a;
    b=2;
    c=a-2;
    if(!(a%2)){
        cout << 0 <<"\n";
        return;
    }
    while (b<c) {
        d++;
        b+=2;
        c-=2;
    }
    cout << d <<"\n";
}
int main(){
    solve();
    return 0;
}

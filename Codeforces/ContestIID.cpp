#include <bits/stdc++.h>
using namespace std;
void solve(){
    int r1,c1,r2,c2;
    string s1,s2;
    cin >> r1 >> c1 >> r2 >> c2;
    if(r1 == r2 || c1 == c2 ){
        cout << 1 << " ";
    }else{
        cout << 2 << " ";
    }
    if((r1+c1)%2 != (r2+c2)%2){
        cout << 0 << " ";
    }else{
        if(c1+r1 == c2+r2 || r1-c1 == r2-c2){
            cout << 1 << " ";
        }else {
            cout << 2 << " ";
        }
    }
    cout << max(abs(c1-c2),abs(r1-r2)) << "\n";
}
int main(){
    solve();
}

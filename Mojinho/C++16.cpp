#include <bits/stdc++.h>
using namespace std;
void solve(){
    set<long long> a,b;
    long long x,m,k,c;
    cin >> m;
    for(int i = 0;i<m;i++){
        cin >> x;
        a.insert(x);
    }
    cin >> k;
    for(int i = 0;i<k;i++){
        cin >> x;
        b.insert(x);
    }
    for(int f : a){
        if(b.count(f))
            cout << f << " ";
    }
    cout << "\n";
}
int main(){
    solve();
}

#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,s,x;
    vector<int> a,b,c;
    cin >> n >> s;
    for(int i = 0 ; i<n;i++){
        cin >> x;
        a.emplace_back(x);
    }
    for(int i = 0 ; i<n;i++){
        cin >> x;
        b.emplace_back(x);
    }
    for(int i = 0 ; i<n;i++){
        if(a[i]&b[i]){
            c.emplace_back(1);
        }else{
            c.emplace_back(0);
        };
    }
    if(a[0]==1){
        if(a[s-1]==1){
            cout << "YES\n";
            return;
        }
        for(int i=s-1;i<n;i++){
            if(c[i]==1&&b[s-1]==1){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main(){
        solve();
}

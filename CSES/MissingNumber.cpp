#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    vector <int> v;
    cin >> n;
    for(int i=0;i<n-1;i++) {
        cin >> v.emplace_back();
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) {
        if(v[0]!=1){
            cout << 1 << "\n";
            return;
        }
        if(v[i+1] != v[i]+1){
            cout << v[i]+1 << "\n";
            return;
        }
    }
    return;
}
int main(){
    solve();
}

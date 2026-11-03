#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,d1;
    cin >> n;
    vector <int> tropa;
    for(int i=0;i<n;i++){
        cin >> tropa.emplace_back();
    }
    if(n == count(tropa.begin(),tropa.end(),tropa[0])){
        cout << "NO\n";
        return;
    }else{
         cout << "YES\n";
    }
    for(int i=1;i<n;i++){
        if(tropa[0]!=tropa[i]) {
            d1 = i+1;
            cout << 1 << " " << i+1 << "\n";
        }
    }
    for(int i=1;i<n;i++){
        if(tropa[0]==tropa[i]) {
            cout << d1 << " " << i+1 << "\n";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}

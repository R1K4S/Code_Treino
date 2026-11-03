#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,soma;
    vector<int> v;
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        cin >> v.emplace_back();
    }
    if(n>m || n==2){
        cout << "-1\n";
        return;
    }
    soma = accumulate(v.begin(),v.end(),0);
    cout << 2*soma <<"\n";

    for(int i = 1;i<n;i++){
            cout << i << " " << i+1 <<"\n";
    }
    cout << n << " " << 1 <<"\n";
    return;

}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(){
    int n,d;
    bool maior = false;
    cin >> n >> d;
    vector<int> numeros(n);
    for(int i=0;i<n;i++){
        cin >> numeros[i];
        if (numeros[i] > d) {
            maior = true;
        }
    }
    sort(numeros.begin(),numeros.end());
    if((!maior)||(numeros[0]+numeros[1] <= d) ){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

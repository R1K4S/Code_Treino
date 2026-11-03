#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,round=0;
    cin >> a >> b >> c;
    if(a==b || a==c || c==b ){
        cout << round << "\n";
        return;
    }
    vector<int> lista;
    lista.push_back(a);
    lista.push_back(b);
    lista.push_back(c);
    sort(lista.begin(),lista.end());
    while((lista[0]!=lista[1])&&lista[1]!=lista[2]){
        lista[2]--;
        lista[0]++;
        round++;
    }
    cout << round <<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void solve(){
    map <string,int> itens;
    string s;
    int n,x;
    cin >> n;
    while (n--) {
        cin >> s >> x;
        itens[s] = x;
    }
    cin >> s;
    if (itens.count(s))
        cout << itens[s] << "\n";
    else
        cout << "ausente\n";
}
int main(){
    solve();
}

#include <bits/stdc++.h>
using namespace std;
void solve(){
    map <string,int> itens;
    string s;
    int n,x;
    cin >> n;
    while (n--) {
        cin >> s;
        itens[s]++;
    }
    for(const auto& [s,x] : itens){
        cout << s << " " << x << "\n";
    }
}
int main(){
    solve();
}

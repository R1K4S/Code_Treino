#include <bits/stdc++.h>
using namespace std;
int contador(vector<vector<int>> &lista,int atual,int b, vector<int>&contagem){
    for(auto n : lista[atual]){
        b += contador(lista,n,0,contagem);
    }
    contagem[atual]=b;
    b++;
    return b;
}
void solve(){
    long long n=0,c=0;
    cin >> n;
    vector<vector<int>> lista(n+1);
    vector<int> contagem(n);
    for(int i=2;i<=n;i++){
        cin>> c;
        lista[c].push_back(i);
    }
    contador(lista,1,0,contagem);
    for(int i=1;i<=n;i++){
        cout << contagem[i] <<  "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    solve();
}

#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &grafo,int u, vector<int >&visitados){
    if (visitados[u]==1){
        return;
    }
    visitados[u]=1;
    for(auto n : grafo[u]){
        dfs(grafo,n,visitados);
    }
    return;
}
void solve(){
    long long n,m,a,b,vans=0;
    cin >> n >> m;
    vector<vector<int>> lista(n+1);
    vector<int> visitados(n+1);
    for(int i=0;i<m;i++){
        cin >> a >> b;
        lista[a].push_back(b);
        lista[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(visitados[i]==0){
            vans++;
            dfs(lista,i,visitados);
        }
    }

    cout  << vans << "\n";

}
int main(){
    ios::sync_with_stdio(false);
    solve();
}

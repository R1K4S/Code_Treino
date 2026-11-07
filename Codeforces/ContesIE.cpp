#include <bits/stdc++.h>
using namespace std;
int n,grupos=0;
vector<int> chefe(2010,0),depth(2010,0);
int profudidade(int u){
    if(depth[u]!=0)return depth[u];
    if(chefe[u]==-1)return depth[u]=1;
    return depth[u] = profudidade(chefe[u])+1;
}
void solve(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> chefe[i];
    }
    for(int i=1;i<=n;i++){
       profudidade(i);
    }
    auto maior_iter = max_element(depth.begin(), depth.end());
    grupos += *maior_iter;
    cout << grupos << "\n";
}
int main(){
    solve();
}

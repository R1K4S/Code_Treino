#include <bits/stdc++.h>
using namespace std;
long long n,s,x;
vector <int> chefes(2010),prof(2010,-1);
int profundidade(int i){
    if(prof[i]!=-1) return prof[i];
    if(chefes[i]==-1) return prof[i]=1;
    return prof[i]= profundidade(chefes[i])+1;
}
void solve(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin>>chefes[i];
    }
    for(int i=1;i<=n;i++){
        cout<<i<<":"<<chefes[i]<<"\n";
    }
    int grupos = 0;
    for(int x = 1;x<=n;x++){
        grupos = max(grupos,profundidade(x));
    }
    cout << grupos <<"\n";
    for(int i=1;i<=n;i++){
        cout << prof[i] <<" ";
    }
}
int main(){
        solve();
}

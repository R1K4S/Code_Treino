#include <bits/stdc++.h>
using namespace std;
void solve(int t){
    unordered_map<long long,int> patos;
    long long penas,moda=1,max_cout=-1;
    for(int i = 1;i<=t;i++){
        cin >> penas;
        ++patos[penas];
        if(max_cout < patos[penas]){
            max_cout = patos[penas];
            moda = penas;
        }
    }
    cout << moda << "\n";
    return;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    while(cin >> t,t != 0){
        if(t==0)return 0;
        solve(t);
    };
    return 0;
}

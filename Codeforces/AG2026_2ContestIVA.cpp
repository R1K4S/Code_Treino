#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long tempo=0;
bool achado = false;
vector<int> pares,impares;
long long dividir(long long u,long long k){
    if(u<=k) re;
    if(u^2){
        pares.push_back(u/2);
        impares.push_back(u/2+1);
        dividir(u/2+1,k);
    }else{
         pares.push_back(u/2);
         dividir(u/2,k);
    }
    return 0;
}
void solve(){
    long long n,k;
    cin >> n >> k;
    dividir(n, k);
    cout << pares.size() << " " << impares.size() << "\n";
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

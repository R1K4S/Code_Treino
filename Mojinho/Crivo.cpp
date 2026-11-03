#include <bits/stdc++.h>
using namespace std;
vector<int> primos(int n){
    bitset<1000000> sieve;
    vector<int>ps {2};
    sieve.set();
    for(int i = 3;i<=n;i+=2){
        if(sieve[i]){
            ps.push_back(i);
            for(int j = 2*i;j<=n;j+=i)
                sieve[j]=false;
        }
    }
    return ps;
}
void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << 0 <<"\n";
        return;
    }
    auto ps = primos(n);
    cout << size(ps) << "\n";
}
int main(){
    solve();
    return 0;
}

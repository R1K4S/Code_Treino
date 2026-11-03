#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long soma,n,x,y;
    cin >> n;
    pair <int, int> par;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        par.first = x;
        par.second = y;
        soma = par.first + par.second;
        cout << soma << "\n";
    }
    return 0;
}

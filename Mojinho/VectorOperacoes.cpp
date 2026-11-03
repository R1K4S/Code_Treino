#include <bits/stdc++.h>
using namespace std;
int main(){
    long long soma=0,n,x;
    cin >> n;
    vector<long long> v;
    for(int i=0;i<n;i++){
        cin >> x;
        soma += x;
        v.emplace_back(x);
    }
    sort(v.begin(),v.end());
    cout << soma << "\n";
    cout << v[n-1] << "\n";
    cout << v[0] << "\n";
}

#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,mov=0;
    cin >> n;
    vector <long long> v;
    for(long long i = 0;i<n;i++){
        cin >> v.emplace_back();
    }
    for(long long i = 0;i<n-1;i++){
        if(v[i] > v[i+1]){
            mov += v[i+1] - v[i];
            v[i+1] = v[i];
        }
    }
    cout << mov*-1 << "\n";
}
int main(){
    solve();
}

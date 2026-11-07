#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,x;
    vector<long long> v;
    cin >> n;
    while(n--){
        cin >> x;
        v.emplace_back(x);
    }
    cin >> x;
    sort(v.begin(),v.end());
    for(int y:v){
        cout << y << " ";
    }
    cout <<"\n";
    cout << count(v.begin(),v.end(),x)<<"\n";
    cout << (find(v.begin(),v.end(),x)!=v.end() ? "sim\n":"nao\n");
}
int main(){
    solve();
}

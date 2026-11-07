#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v.emplace_back();
    }
    v.erase(remove_if(v.begin(),v.end(),[](int x){return x % 2 == 0;}),v.end());
    for(int x : v) cout << x << " ";
    cout << "\n";
}

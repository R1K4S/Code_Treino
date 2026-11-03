#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> x;
        v.emplace_back(x);
    }
    for(int i = n-1; i >= 0;i--){
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}

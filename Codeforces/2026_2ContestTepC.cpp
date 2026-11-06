#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,s,x;
    vector<int> a,b;
    cin >> n >> s;
    bitset <10010> c;
    for(int i=0;i<n;i++){
        cin >> x;
        a.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        cin >> x;
        b.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        if(a[i]&b[i]){
            for(int j = 0;j<=i;j++){
                if(a[j])
                c[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << b[i] << " ";
    }
    if((a[0]==1) && (c[s] == 1)){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}
int main (){
    solve();
    return 0;
}

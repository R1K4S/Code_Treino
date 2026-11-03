#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m,x1,x2,y1,y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    if((x1 == 1 && y1 == 1)|| (x1 == 1 && y1 == m)||(x1 == n && y1 == 1)||(x1 == n && y1 == m)){
        cout << 2 << "\n";
        return;
    }
    if((x2 == 1 && y2 == 1)|| (x2 == 1 && y2 == m)||(x2 == n && y2 == 1)||(x2 == n && y2 == m)){
        cout << 2 << "\n";
        return;
    }if(x1 == 1 || y1 == 1 || x1 == n || y1 == m){
        cout << 3 << "\n";
        return;
    }if(x2 == 1 || y2 == 1 || x2 == n || y2 == m){
        cout << 3 << "\n";
        return;
    }
    cout << 4 << "\n";
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y;
    pair <int,int> a,b,c;
    cin >> n;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;
    x = (b.first-a.first)*(c.first-a.first);
    y = (b.second-a.second)*(c.second-a.second);
    if(x>0&&y>0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
int main(){
    solve();
}

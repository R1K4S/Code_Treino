#include <bits/stdc++.h>
using namespace std;
void solve(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a;
    int b;
    cin >> a;
    cin >> b;
    cout << ((a=="front"&&b==1)||(a=="back"&&b==2)?"L":"R")<< "\n";
}
int main(){
    solve();
}

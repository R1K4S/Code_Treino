#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cin >> n;
    if (n==2) {
        cout << "NO" << "\n";
        return 0;
    }
    cout << (n & 1 ? "NO" : "YES") << "\n";
    return 0;
}

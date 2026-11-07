#include <bits/stdc++.h>
using namespace std;
template <class T>
T menor(T a, T b ){
    return (a<b)?a:b;
}
int main(){
    int n,a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << menor(a,b) << "\n";
    }
}

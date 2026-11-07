#include <bits/stdc++.h>
using namespace std;

template <class T>
struct Caixa {
    T v;
    T dobro() const {return v+v;}
};
int main(){
    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        Caixa<long> c{x};
        cout << c.dobro() << "\n";
    }
}
